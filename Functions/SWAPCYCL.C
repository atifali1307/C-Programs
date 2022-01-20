//Cyclic Swap using call by reference

#include<stdio.h>
#include<conio.h>
void main()
{
  void cyclicswap(int *,int *,int *);
  int a,b,c;
  printf("Enter Value of a, b and c respectively: ");
  scanf("%d %d %d",&a,&b,&c);
  printf("Value before swapping: \n");
  printf("a= %d\nb= %d\nc= %d\n",a,b,c);
  cyclicswap(&a,&b,&c);
  printf("Value after Swapping: \n");
  printf("a= %d\nb= %d\nc= %d\n",a,b,c);
  getch();
}
void cyclicswap(int *n1,int *n2,int *n3)
{
  int temp;
  temp=*n2;
  *n2=*n1;
  *n1=*n3;
  *n3=temp;
}