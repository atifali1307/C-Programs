#include<stdio.h>
#include<conio.h>
int a;
void main()
{
  void func1(void);
  int a;
  clrscr();
  ::a=5;
  func1();
  func1();
  func1();
  func1();
  func1();
  func1();
  printf("\n%d",::a);
  getch();
}
void func1()
{
  static int a=6;
  printf("\n%d",a);
  a++;
}