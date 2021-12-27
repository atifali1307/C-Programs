#include<stdio.h>
#include<conio.h>
void main()
{
  void reverse(int [],int,int);
  int a[20],i,n,temp;
  clrscr();
  printf("Number of Elements you want to insert in the Array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
  printf("\nArray Elements are: \n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  reverse(a,0,n-1);
  printf("\n\nReverse of Array is: \n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  getch();
}
void reverse(int a[],int start,int end)
{
  int temp;
  while(start<end)
  {
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
  }
}



