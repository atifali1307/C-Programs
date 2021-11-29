#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a,count=0;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  while(n>0)
  {
    a=n%10;
    count+=1;
    n=n/10;
  }
  printf("%d digit present the given number.",count);
  getch();
}