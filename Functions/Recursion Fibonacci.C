#include<stdio.h>
#include<conio.h>
void main()
{
  int fibonacci(int);
  int n,i;
  clrscr();
  printf("Enter number of Elements you want in Fibonacci Series: ");
  scanf("%d",&n);
  printf("\n\nFibonacci series is: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",fibonacci(i));
  }
  getch();
}
int fibonacci(int i)
{
  if(i==0)
    return 0;
  else if(i==1)
    return 1;
  else
    return fibonacci(i-1)+fibonacci(i-2);
}
