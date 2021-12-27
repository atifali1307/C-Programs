#include<stdio.h>
#include<conio.h>
void main()
{
  void inputmatrix(int [3][4],int,int);
  void outputmatrix(int [3][4],int,int);
  void summatrix(int [3][4],int [3][4],int [3][4],int,int);  //c=a+b
  void submatrix(int [3][4],int [3][4],int [3][4],int,int);   //c=a-b
  void mulmatrix(int [3][4],int [3][4],int [3][4],int,int,int); //c=a*b
  int a[3][4],b[3][4],c[3][4],d[3][4];
  clrscr();
  printf("Enter Elements of First Matrix: \n\n");
  inputmatrix(a,3,4);
  printf("\n\nEnter Elements of Second Matrix: \n\n");
  inputmatrix(b,3,4);
  summatrix(c,a,b,3,4);
  submatrix(d,a,b,3,4);
  printf("\n\nElements of First Matrix are: \n\n");
  outputmatrix(a,3,4);
  printf("\n\nElements of Second Matrix are: \n\n");
  outputmatrix(b,3,4);
  printf("\n\nSummation of Two Matrix are: \n\n");
  outputmatrix(c,3,4);
  printf("\n\nSubtraction of Two Matrix are: \n\n");
  outputmatrix(d,3,4);
  getch();
}
void inputmatrix(int a[3][4],int r,int c)
{
  int j,i;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
}
void outputmatrix(int a[3][4],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
}
void summatrix(int c[3][4],int a[3][4],int b[3][4],int r,int s)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<s;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
}
void submatrix(int d[3][4],int a[3][4],int b[3][4],int r,int s)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<s;j++)
    {
      d[i][j]=a[i][j]-b[i][j];
    }
  }
}