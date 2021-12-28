#include<stdio.h>
#include<conio.h>
void main()
{
  void inputmatrix(int [3][3],int,int);
  void outputmatrix(int [3][3],int,int);
  void transpose(int [3][3],int,int);
  int a[3][3],i;
  clrscr();
  printf("Enter First Matrix\n\n");
  inputmatrix(a,3,3);
  printf("\n\nElements of First Matrix are: \n\n");
  outputmatrix(a,3,3);
  transpose(a,3,3);
  printf("\n\nMatrix after Transpose is: \n\n");
  outputmatrix(a,3,3);
  getch();
}
void inputmatrix(int a[3][3],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
}
void outputmatrix(int a[3][3],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
void transpose(int a[3][3],int r,int c)
{
  int i,j,temp;
  for(i=0;i<r;i++)
  {
    for(j=0;j<=i;j++)
    {
      if(i!=j)
      {
	temp=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=temp;
      }
    }
  }
}