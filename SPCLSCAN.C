#include<stdio.h>
#include<conio.h>
void main()
{
  char fname[100],lname;
  clrscr();
  printf("Enter any Name: ");
  scanf("%[^\n]",&fname);//takes character untill the new line character meets.
  getch();
}