#include<stdio.h>
#include<conio.h>
#include<Math.h>
void main()
{
  int n,i;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  for(i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      printf("Number is Not Prime");
      break;
    }
  }
  if(i>sqrt(n))
    printf("Number is Prime");
  getch();
}