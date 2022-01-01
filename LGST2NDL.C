#include<stdio.h>
#include<conio.h>
void main()
{
  int a[50],i,n,largest,s_largest;
  clrscr();
  printf("Enter number of elements you want to insert in an Array: ");
  scanf("%d",&n);
  printf("Enter Elements of an Array: \n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  largest=a[0];
  s_largest=a[1];
  for(i=0;i<n;i++)
  {
    if(a[i]>largest)
    {
      s_largest=largest;
      largest=a[i];
    }
    else if(a[i]>s_largest && a[i]!=largest)
    {
      s_largest=a[i];
    }
  }
  printf("Largest Number in this Array is %d\n",largest);
  printf("Second Largest Number in this Array is %d",s_largest);
  getch();
}