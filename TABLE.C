#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i,n,c;
  clrscr();
  printf("Enter first number: ");
  scanf("%d",&a);
  printf("Enter second number: ");
  scanf("%d",&b);
  for(i=a;i<=b;i++)
  {
    n=1;
    while(n<=10)
    {
      c=i*n;
      printf("%d*%d=%d\n",i,n,c);
      n=n+1;
    }
  }
  getch();
}
