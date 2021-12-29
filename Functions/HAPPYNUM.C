#include<stdio.h>
#include<conio.h>
void main()
{
  int numsqsum(int);
  int ishappynum(int);
  int n;
  clrscr();
  scanf("%d",&n);
  if(ishappynum(n))
    printf("1");
  else
    printf("0");
  getch();
}
int ishappynum(int n)
{
  int s,f;
  s=n;
  f=n;
  do
  {
    s=numsqsum(s);
    f=numsqsum(numsqsum(f));
  }while(s!=f);
  return (s==1);
}
int numsqsum(int n)
{
  int sqsum=0;
  while(n)
  {
    sqsum+=(n%10)*(n%10);
    n/=10;
  }
  return sqsum;
}
