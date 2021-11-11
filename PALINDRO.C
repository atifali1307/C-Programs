#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,sum=0;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
  n=temp;
  if(n==sum)
  {
    printf("Given number is Palindrome");
  }
  else
  {
    printf("Given number is not a Palindrome");
  }
  getch();
}
