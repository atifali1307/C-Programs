#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j,k;
  clrscr();
  printf("Enter First Matrix: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nEnter Second Matrix: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n\nFirst Matrix\n\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\n\nSecond Matrix\n\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      c[i][j]=0;
      for(k=0;k<3;k++)
      {
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
      }
    }
  }
  printf("\n\nMatrix Multiplication\n\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
  getch();
}
