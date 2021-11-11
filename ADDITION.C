#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter Value of a: ");
  scanf("%d",&a);
  printf("Enter Value of b: ");
  scanf("%d",&b);
  c=a+b;
  printf("Sum of %d and %d is %d",a,b,c);
  getch();
}