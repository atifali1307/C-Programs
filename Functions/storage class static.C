#include<stdio.h>
#include<conio.h>
void fun1(void);
static int count=5;    //static global variable
void main()
{
  clrscr();
  while(count--)
  {
    fun1();
  }
  getch();
}
void fun1()
{
  static int i=5;
  i++;
  printf("\n\ni is %d and count is %d",i,count);
}
