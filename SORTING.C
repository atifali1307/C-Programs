#include<stdio.h>
#include<conio.h>
void main()
{
  int a[30],i,j,pass,temp,n;
  clrscr();
  printf("Enter number of elements you want to insert in an Array: \n");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n\nElements before sorting are: \n\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  for(pass=1;pass<n-1;pass++)
  {
    for(j=0;j<n-pass;j++)
    {
      if(a[j]>a[j+1])
      {
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
      }
    }
  }
  printf("\n\nElements after Sorting are: \n\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  getch();
}
