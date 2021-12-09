#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],b[5],c[5],i,j,k,k2;
  clrscr();
  printf("Enter Elements of First Array: \n");
  for(i=0;i<5;i++)
  {
    printf("a[%d]",i);
    scanf("%d",&a[i]);
  }
  printf("Enter Elements of Second Array: \n");
  for(j=0;j<5;j++)
  {
    printf("b[%d]",j);
    scanf("%d",&b[j]);
  }
  printf("Multiplication of Two Arrays\n");
  for(k=0;k<5;k++)
  {
    c[k]=a[k]*b[k];
  }
  for(k2=0;k2<5;k2++)
  {
    printf("c[%d]=%d\n",k2,c[k2]);
  }
  getch();
}