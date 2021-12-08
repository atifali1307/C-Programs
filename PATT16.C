#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,m,k;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=5-i;j>0;j--)
    {
      printf(" ");
    }
    for(m=1;m<=i;m++)
    {
      if(m==1)
	printf("1");
      else
      {
	if(i==5)
	  printf("%d",m);
	else
	  printf(" ");
      }
    }
    for(k=i-1;k>0;k--)
    {
      if(k==1)
	printf("1");
      else
      {
	if(i==5)
	  printf("%d",k);
	else
	  printf(" ");
      }
    }
    printf("\n");
  }
  getch();
}