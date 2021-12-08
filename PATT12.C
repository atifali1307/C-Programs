#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(j=5-i;j>0;j--)
    {
      printf("*");
    }
    for(k=1;k<=i;k++)
    {
      printf("%d",k);
    }
    printf("\n");
  }
  getch();
}