#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter Decimal Number: ");
  scanf("%d",&a);
  printf("Enter Octal Number: ");
  scanf("%o",&b);
  printf("Enter Hexadecimal Number: ");
  scanf("%x",&c);
  printf("%d to Octal Number is %o\n");
  printf("%d to Hexadecimal Number is %x\n");
  printf("%o to Decimal Number is %d\n");
  printf("%o to Hexadecimal Number is %x\n");
  printf("%x to Decimal Number is %d\n");
  printf("%x to Octal Number is %o\n");
  getch();
}