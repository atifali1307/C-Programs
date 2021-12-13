#include<stdio.h>
#include<conio.h>
void main()
{
  void swap(int,int);
  int x,y;
  clrscr();
  printf("Enter Value of x: ");
  scanf("%d",&x);
  printf("Enter Value of y: ");
  scanf("%d",&y);
  printf("Values Before Swapping: \nX=%d\nY=%d",x,y);
  swap(x,y);
  printf("Values After Swapping: \nX=%d\nY=%d",x,y);
  getch();
}
void swap(int x,int y)
{
  int z;
  z=x;
  x=y;
  y=z;
}