#include<stdio.h>
#include<conio.h>
enum boolean
{
  false,true
};
enum boolean isEven(int x)
{
  if(x%2==0)
    return true;
  else
    return false;
}
void main()
{
  int n;
  enum boolean result;
  clrscr();
  printf("Enter a Number: ");
  scanf("%d",&n);
  result=isEven(n);
  if(result)
    printf("%d is Even Number",n);
  else
    printf("%d is Odd Number",n);
  getch();
}