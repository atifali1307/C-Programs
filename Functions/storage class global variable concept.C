#include<stdio.h>
#include<conio.h>
int a=25;
void main()
{
  void display1(void);
  clrscr();
  ++a;
  display1();
  getch();
}
void display1()
{
  ++a;
  printf("a= %d",a);
}
