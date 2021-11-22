#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a,fact=1;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&a);
  n=a;
  while(n>=1)
  {
    fact=fact*n;
    n-=1;
  }
  printf("Factorial of %d is %d",a,fact);
  getch();
}