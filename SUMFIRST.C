#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,sum=0;
  clrscr();
  while(a<=10)
  {
    sum=sum+a;
    a+=1;
  }
  printf("Sum of First 10 natural numbers is %d",sum);
  getch();
}
