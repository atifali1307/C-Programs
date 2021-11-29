#include<stdio.h>
#include<conio.h>
void main()
{
  int a=5,b=9,x;
  clrscr();
  a>b?printf("%d is maximum",a):printf("%d is maximum",b);
  printf("\n\n");
  x=a>b?a:b;
  printf("%d is maximum",x);
  getch();
}
