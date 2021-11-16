#include<stdio.h>
#include<conio.h>
void main()
{
  char a,b,c;
  clrscr();
  printf("Enter a: ");
  scanf("%c",&a);
  fflush(stdin);
  printf("Enter b: ");
  scanf("%c",&b);
  c=a+b;
  printf("Sum of %c and %c is %c",a,b,c);
  getch();
}