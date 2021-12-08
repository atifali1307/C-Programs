#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  int i,j;
  clrscr();
  for(i=1;i<=23;i++)
  {
    ch='A';
    for(j=1;j<=i;j++)
    {
      printf("%c",ch++);
    }
    printf("\n");
  }
  getch();
}