#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  clrscr();
  for(i=1;i<=10;i++)
  {
    printf("%d",i);
    if(i%5==0)
      break;
    printf("  Hello\n");
  }
  getch();
}