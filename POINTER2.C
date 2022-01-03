#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  int *p;
  int **pp;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  p=&n;
  pp=&p;
  printf("Value of n= %d",n);
  printf("\nAddress of n= %x",p);
  printf("\nValue at n= %d",*p);
  printf("\nAddress of p= %x",pp);
  printf("\nValue at n= %d",**pp);
  getch();
}