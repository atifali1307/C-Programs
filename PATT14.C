#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,l;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=5-i;j>0;j--)
    {
      printf(" ");
    }
    for(k=1;k<=i;k++)
    {
      if(k==1)
	printf("1");
      else
      {
	if(i==5)
	  printf("1");
	else
	  printf(" ");
      }
    }
    for(l=i-1;l>0;l--)
    {
      if(l==1)
	printf("1");
      else
      {
	if(i==5)
	  printf("1");
	else
	  printf(" ");
      }
    }
    printf("\n");
  }
  getch();
}