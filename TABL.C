#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,b;
  clrscr();
  printf("Enter anu Number: ");
  scanf("%d",&a);
  for(i=1;i<=10;i++)
  {
    b=i*a;
    printf("%d*%d=%d\n",a,i,b);
  }
  getch();
}