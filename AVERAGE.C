#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e;
  clrscr();
  printf("Enter value of a: ");
  scanf("%d",&a);
  printf("Enter value of b: ");
  scanf("%d",&b);
  printf("Enter value of c: ");
  scanf("%d",&c);
  printf("Enter value of d: ");
  scanf("%d",&d);
  e=(a+b+c+d)/4;
  printf("Average of above four numbers are: %d",e);
  getch();
}