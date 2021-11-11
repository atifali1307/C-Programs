#include<stdio.h>
#include<conil.h>
void main()
{
  int n,a=0,b=1,c;
  clrscr();
  printf("Enter limit: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
  }
  getch();
}