#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],i,h,n;
  clrscr();
  printf("Enter number of Elements you want to insert in an Array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n\nElements of an Array are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  h=a[0];
  for(i=1;i<n;i++)
  {
    if(h<a[i])
    {
      h=a[i];
    }
  }
  printf("\n\nHighest Element is %d",h);
  getch();
}