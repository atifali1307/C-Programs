#include<stdio.h>
#include<conio.h>
int count;
void main()
{
  void fun(void);
  clrscr();
  count=5;
  getch();
}

void fun()
{
  printf("count is %d",count);
}