//Factorial using Recursion

#include<stdio.h>
#include<conio.h>
void main()
{
  int fact(int);
  int n,x;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  x=fact(n);
  printf("\n\nFactorial of given Number is %d",x);
  getch();
}
int fact(int n)
{
  if(n==0)
    return 1;
  else
    return n*fact(n-1);
}