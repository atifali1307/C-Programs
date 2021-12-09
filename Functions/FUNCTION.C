#include<stdio.h>
#include<conio.h>
void main()
{
  int a,x;
  clrscr();
  is_even();
  printf("Enter any Number");
  scanf("%d",&a);
  x=is_even(a);
  if(x==1)
    printf("Number is even");
  else
    printf("Number is Odd");
  getch();
}
int is_even(int num)
{
  if(num%2==0)
    return 1;
  else
    return 0;
}