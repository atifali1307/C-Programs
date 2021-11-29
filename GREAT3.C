#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter value of a: ");
  scanf("%d",&a);
  printf("Enter value of b: ");
  scanf("%d",&b);
  printf("Enter value of c: ");
  scanf("%d",&c);
  if(a>b)
  {
    if(a>c)
      printf("%d is Maximum",a);
    else
      printf("%d is Maximum",c);
  }
  else
  {
    if(b>c)
      printf("%d is Maximum",b);
    else
      printf("%d is Maximum",c);
  }
  getch();
}