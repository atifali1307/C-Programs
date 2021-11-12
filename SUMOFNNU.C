#include<stdio.h>
#include<conio.h>
void main()
{
  int x,i,sum=0;
  clrscr();
  printf("Ente any number: ");
  scanf("%d",&x);
  for(i=1;i<=x;i++)
  {
    sum=sum+i;
  }
  printf("Sum from 1 to %d is %d",x,sum);
  getch();
}