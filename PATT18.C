#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,i2,j2;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i2=1;i2<=5;i2++)
  {
    for(j2=1;j2<=i2;j2++)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
}