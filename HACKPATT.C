#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  for(i=1;i<=2*n;i++)
  {
    k=n;
    if(i<=n)
    {
      for(j=1;j<2*n;j++)
      {
	printf("%d ",k);
	if(i>j)
	{
	  k--;
	}
	if(i+j>=2*n)
	{
	  k++;
	}
      }
    }
    if(i>n)
    {
      for(j=1;j<2*n;j++)
      {
	printf("%d ",k);
	if(j>=i)
	{
	  k++;
	}
	if(i+j<2*n)
	{
	  k--;
	}
      }
    }
    printf("\n");
  }
  getch();
}