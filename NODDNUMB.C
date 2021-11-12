#include<stdio.h>
#include<conio.h>
void main()
{
  int x,i,sum=0;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",x);
  for(i=1;i<=x;i++)
  {
    if(x%2==0)
    {
      continue;
    }
    else
    {
      sum=sum+i;
    }
  }
  printf("Sum of Odd Numbers is %d",sum);
  getch();
}