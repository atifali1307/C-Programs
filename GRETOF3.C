#include<stdio.h>
#include<conio.h>
void main()
{
  int a=4,b=8,c=19,x;
  clrscr();
  x=a>b?(a>c?a:c):(b>c?b:c);
  printf("%d is Maximum",x);
  getch();
}