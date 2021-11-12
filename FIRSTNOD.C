#include<stdio.h>
#include<conio.h>
void main()
{
  int x,i;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&x);
  for(i=1;i<=x;i++)
  {
    if(i%2!=0)
      printf("%d\t",i);
  }
  getch();
}
