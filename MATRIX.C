#include<stdio.h>
#include<conio.h>
void main()
{
  void transpose(int [3][3],int,int);
  int sumelements(int [3][3],int,int);
  void outputmatrix(int [3][3],int,int);
  void addtwomatrix(int [3][3],int [3][3],int [3][3],int,int);
  int a[3][3],b[3][3],c[3][3],i,j,k,x;
  clrscr();
  printf("Enter Elements of First Matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n\nFirst Array Elements are:\n\n");
  outputmatrix(a,3,3);
  x=sumelements(a,3,3);
  printf("\nSum of Elements of First Array are: %d",x);
  printf("\n\nTranspose of a Matrix is: \n\n");
  transpose(a,3,3);
  outputmatrix(a,3,3);
  printf("\n\nEnter Elements of Second Matrix: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n\nSecond Array Elements are: \n\n");
  outputmatrix(b,3,3);
  printf("\n\nAddition of Two Matrices are: \n\n");
  addtwomatrix(c,a,b,3,3);
  outputmatrix(c,3,3);
 /* printf("\n\nMatrix Operations\n\n");
  printf("1. Sum of all Elements of First Matrix\n");
  printf("2. Transpose Matrix\n");
  printf("3. Addition of Two Matrices\n");
  printf("4. Subtraction of Two Matrices\n");
  printf("5. Multiplication of Two Matrices\n");
  printf("6. Output Matrix\n\n"); */

  getch();
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
int sumelements(int a[3][3],int r,int c)
{
  int i,j,sum=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      sum=sum+a[i][j];
    }
  }
  return sum;
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
void addtwomatrix(int c[3][3],int b[3][3],int a[3][3],int r,int d)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<d;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
}