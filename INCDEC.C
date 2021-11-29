#include<stdio.h>
#include<conio.h>
void main()
{
  int x=5,y,a=5,b;
  clrscr();
  y=x++ + ++x + ++x;
  printf("%d\n",y);
  printf("%d\n\n\n",x);
  b=a-- + ++a + ++a;
  printf("%d\n",b);
  printf("%d",a);
  getch();
}
