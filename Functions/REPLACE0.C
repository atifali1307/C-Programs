#include<stdio.h>
#include<conio.h>
void main()
{
  int reverse(int);
  int convert(int);
  int n,x;
  clrscr();
  scanf("%d",&n);
  x=convert(n);
  printf("%d",x);
  getch();
}
int convert(int n)
{
  int temp=0,d;
  if(n==0)
    return 5;
  else
  {
    while(n>0)
    {
      d=n%10;
      if(d==0)
	d=5;
      temp=temp*10+d;
      n=n/10;
    }
    return reverse(temp);
  }
}
int reverse(int temp)
{
  int ans=0,r;
  while(temp>0)
  {
    r=temp%10;
    ans=ans*10+r;
    temp=temp/10;
  }
  return ans;
}

