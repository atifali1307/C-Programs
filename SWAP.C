#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,temp;
  clrscr();
  printf("A: ");
  scanf("%d",&a);
  printf("B: ");
  scanf("%d",&b);
  temp=a;
  a=b;
  b=temp;
  printf("After Swapping Value of a is %d and b is %d",a,b);
  getch();
}
