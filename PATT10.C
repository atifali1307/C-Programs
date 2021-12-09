#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,m;
  clrscr();
  for(i=1;i<=19;i++)
  {
    for(j=19-i;j>0;j--)
    {
      printf(" ");
    }
    for(m=1;m<=i;m++)
    {
      if(m==1)
      {
	printf("1");
      }
      else
      {
	if(i==10)
	{
	  printf("1");
	}
	else
	{
	  printf(" ");
	}
      }
    }
    for(k=i-1;k>0;k--)
    {
      if(k==1)
      {
	printf("1");
      }
      else
      {
	if(i==10)
	{
	  printf("1");
	}
	else
	{
	  printf(" ");
	}
      }
    }
    printf("\n");
  }
  getch();
}