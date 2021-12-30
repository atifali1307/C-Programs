#include<stdio.h>
#include<conio.h>
void main()
{
  void inputmatrix(int [3][3],int,int);
  void outputmatrix(int [3][3],int,int);
  void summatrix(int [3][3],int [3][3],int [3][3],int,int);  //c=a+b
  void submatrix(int [3][3],int [3][3],int [3][3],int,int);   //c=a-b
  void mulmatrix(int [3][3],int [3][3],int [3][3],int,int,int); //c=a*b
  void transpose(int [3][3],int,int);
  void sumelements(int [3][3],int,int);
  void sumldiagonal(int [3][3],int,int);
  void sumrdiagonal(int [3][3],int,int);
  void sumbdiagonal(int [3][3],int,int);
  int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],ch;
  char choice;
  clrscr();
  do
  {
  printf("\n\nMatrix Operations \n");
  printf("1. Addition of Two Matrices\n");
  printf("2. Subtraction of Two Matrices\n");
  printf("3. Multiplication of Two Matrices\n");
  printf("4. Transpose of a Matrix\n");
  printf("5. Sum of all Elements of a Matrix\n");
  printf("6. Sum of Diagonal Elements(left top to right bottom)\n");
  printf("7. Sum of Diagonal Elements(right top to left botton)\n");
  printf("8. Sum of both the Diagonal Elements\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    {
      inputmatrix(a,3,3);
      inputmatrix(b,3,3);
      outputmatrix(a,3,3);
      outputmatrix(b,3,3);
      summatrix(c,a,b,3,3);
      outputmatrix(c,3,3);
      break;
    }
    case 2:
    {
      inputmatrix(a,3,3);
      inputmatrix(b,3,3);
      outputmatrix(a,3,3);
      outputmatrix(b,3,3);
      submatrix(d,a,b,3,3);
      outputmatrix(d,3,3);
      break;
    }
    case 3:
    {
      inputmatrix(a,3,3);
      inputmatrix(b,3,3);
      outputmatrix(a,3,3);
      outputmatrix(b,3,3);
      mulmatrix(e,a,b,3,3,3);
      outputmatrix(e,3,3);
      break;
    }
    case 4:
    {
      inputmatrix(a,3,3);
      outputmatrix(a,3,3);
      transpose(a,3,3);
      outputmatrix(a,3,3);
      break;
    }
    case 5:
    {
      inputmatrix(a,3,3);
      outputmatrix(a,3,3);
      sumelements(a,3,3);
      break;
    }
    case 6:
    {
      inputmatrix(a,3,3);
      outputmatrix(a,3,3);
      sumldiagonal(a,3,3);
      break;
    }
    case 7:
    {
      inputmatrix(a,3,3);
      outputmatrix(a,3,3);
      sumrdiagonal(a,3,3);
      break;
    }
    case 8:
    {
      inputmatrix(a,3,3);
      outputmatrix(a,3,3);
      sumbdiagonal(a,3,3);
      break;
    }
    default:
    {
      printf("Wrong Choice");
    }
  }
  fflush(stdin);
  printf("\n\nDo you want to continue(press y or Y): ");
  scanf("%c",&choice);
  clrscr();
  }while(choice=='y'|| choice=='Y');
  getch();
}
void inputmatrix(int a[3][3],int r,int c)
{
  int i,j;
  printf("\n\nEnter Elements of Matrix: \n\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
}
void outputmatrix(int a[3][3],int r,int c)
{
  int i,j;
  printf("\n\nElements of Matrix are: \n\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
}
void summatrix(int c[3][3],int a[3][3],int b[3][3],int r,int s)
{
  int i,j;
  printf("\n\nAddition of Two Matrices :\n\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<s;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
}
void submatrix(int d[3][3],int a[3][3],int b[3][3],int r,int s)
{
  int i,j;
  printf("\n\nSubtraction of Two Matrices : \n\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<s;j++)
    {
      d[i][j]=a[i][j]-b[i][j];
    }
  }
}
void mulmatrix(int e[3][3],int a[3][3],int b[3][3],int r,int c1,int c2)
{
  int i,j,k;
  printf("\n\nMultiplication of Two Matrices : \n\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c2;j++)
    {
      e[i][j]=0;
      for(k=0;k<c1;k++)
      {
	e[i][j]=e[i][j]+(a[i][k]*b[k][j]);
      }
    }
  }
}
void transpose(int a[3][3],int r,int c)
{
  int i,j,temp;
  printf("\n\nTranspose of a Matrix : \n\n");
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

void sumelements(int a[3][3],int r,int c)
{
  int i,j,sum=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      sum=sum+a[i][j];
    }
  }
  printf("\nSum of all Elements of Matrix is %d",sum);
}
void sumldiagonal(int a[3][3],int r,int c)
{
  int i,j,sum=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==j)
	sum=sum+a[i][j];
    }
  }
  printf("Sum of Diagonal is %d",sum);
}
void sumrdiagonal(int a[3][3],int r,int c)
{
  int i,j,sum=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i+j==r-1)
	sum=sum+a[i][j];
    }
  }
  printf("Sum of Diagonal is %d",sum);
}
void sumbdiagonal(int a[3][3],int r,int c)
{
  int i,j,sum=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==j || i+j==r-1)
	sum=sum+a[i][j];
    }
  }
  printf("Sum of Diagonal is %d",sum);
}