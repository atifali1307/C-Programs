#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("Number is Even");
  }
  else
  {
    printf("Number is Odd");
  }
  getch();
}
