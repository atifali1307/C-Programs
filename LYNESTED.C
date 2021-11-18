#include<stdio.h>
#include<conio.h>
void main()
{
  int y;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&y);
  if(y%4==0)
  {
    if(y%100==0)
    {
      if(y%400==0)
	printf("%d is a Leap Year.");
      else
	printf("%d is not a Leap Year.");
    }
    else
    {
      printf("%d is a Leap Year.");
    }
  }
  else
  {
    printf("%d is not a Leap Year.");
  }
  getch();
}