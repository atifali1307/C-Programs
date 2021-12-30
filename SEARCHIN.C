#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],i,x,n;
  clrscr();
  printf("Enter Number of Elements you want to insert into an Array\n");
  scanf("%d",&n);
  printf("\n\nEnter the Elements of an Array: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n\nArray Elements are: \n\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n\nEnter the Element which you want to search in an Array: \n");
  scanf("%d",&x);
  for(i=0;i<n;i++)
  {
    if(x==a[i])
      printf("\n\n%d is present at index %d",x,i);
  }
  if(i==n)
    printf("\n\nElement is not present in this Array");
  getch();
}