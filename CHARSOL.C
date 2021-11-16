#include<stdio.h>
#include<conio.h>
void main()
{
  char a,b;
  clrscr();
  printf("Enter any character: ");
  scanf("%c",&a);
  fflush(stdin);
  printf("Enter another character: ");
  scanf("%c",&b);
  printf("%c=%d\n",a,a);
  printf("%c=%d\n",b,b);
  getch();
}