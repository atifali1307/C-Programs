#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,c,sum=0;
  printf("Enter value of a: ");
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    c=n*n*r;
    sum=sum+c;
    n=n/10;
  }
  if(n==sum)
  {
    printf("Given Number is Armstrong Number");
  }
  else
  {
    printf("Given Number is not an Armstrong Numnber");
  }
}