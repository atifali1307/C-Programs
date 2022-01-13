#include<stdio.h>
#include<conio.h>
void main()
{
  int *a,i,sum=0;
  clrscr();
  printf("Enter 5 Elements:\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",(a+i));
  }
  for(i=0;i<5;i++)
  {
    sum=sum+ *(a+i);
  }
  printf("Sum of all Elements are; %d",sum);
  getch();
}