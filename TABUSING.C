#include<stdio.h>
#include<conio.h>
void main()
{
  int a,n=1;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&a);
  while(n<=10)
  {
    printf("%d * %d = %d\n",a,n,a*n);
    n+=1;
  }
  getch();
}