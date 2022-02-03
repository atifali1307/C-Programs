#include<stdio.h>
#include<conio.h>
void main()
{
  void func(void);
  int i;
  clrscr();
  for(i=0;i<5;i++)
  {
    printf("\n%d",i);
  }
  func();
  getch();
}

void func()
{
  printf("%d",i);     // i is local variable to function main so it is not accessible in this function

}