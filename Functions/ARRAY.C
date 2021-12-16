#include<stdio.h>
#include<conio.h>
void main()
{
  void iparray1(int [],int);
  void iparray2(int [],int);
  void oparray(int [],int);
  void oparray2(int [],int);
  void mularray(int [],int,int [],int);
  int sumarray(int [],int);
  int n[10],m[10],x,sum,a;
  clrscr();
  printf("Enter Number of Elements you want to insert into an Array1: ");
  scanf("%d",&x);
  iparray1(n,x);
  oparray(n,x);
  sum=sumarray(n,x);
  printf("\nSum of all the Elements of an Array: %d",sum);
  printf("\nEnter Number of Elements you want to insert into an Array2: ");
  scanf("%d",&a);
  iparray2(m,a);
  oparray2(m,a);
  mularray(n,x,m,a);
  getch();
}
void mularray(int a[],int size,int b[],int size2)
{
  int i,j;
  for(i=0;i<size;i++)
  {
    for(j=0;j<size2;j++)
    {
      if(i==j)
	printf("\nn[%d]*m[%d]=%d",i,j,a[i]*b[j]);
    }
  }
}
void iparray1(int a[],int size)
{
  int j;
  for(j=0;j<size;j++)
  {
    printf("n[%d]=",j);
    scanf("%d",&a[j]);
  }
}
void iparray2(int a[],int size)
{
  int k;
  for(k=0;k<size;k++)
  {
    printf("m[%d]=",k);
    scanf("%d",&a[k]);
  }
}
void oparray(int a[],int size)
{
  int j;
  printf("Elements of Array are: ");
  for(j=0;j<size;j++)
  {
    printf("%d ",a[j]);
  }
}
void oparray2(int a[],int size)
{
  int j;
  printf("Elements of Array2 are: ");
  for(j=0;j<size;j++)
  {
    printf("%d ",a[j]);
  }
}
int sumarray(int a[],int size)
{
  int i,sum=0;
  for(i=0;i<size;i++)
  {
    sum+=a[i];
  }
  return sum;
}