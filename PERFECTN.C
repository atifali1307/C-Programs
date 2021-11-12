#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,sum=0;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(n==sum)
  {
    printf("%d is a perfect number");
  }
  else
  {
    printf("%d is not a perfect number");
  }
  getch();
}
