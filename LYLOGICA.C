#include<stdio.h>
#include<conio.h>
void main()
{
  int y;
  clrscr();
  printf("Enter any Year: ");
  scanf("%d",&y);
  if((y%400==0)||(y%4==0&&y%100!=0))
    printf("%d is a Leap Year.");
  else
    printf("%d is not a Leap Year.");
  getch();
}
