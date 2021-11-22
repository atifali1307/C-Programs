#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
  int n,a,b,c;
  clrscr();
  printf("Operations List");
  printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
  printf("\n\nEnter Your Choice: ");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
      printf("Enter First Number: ");
      scanf("%d",&a);
      printf("Enter Second Number: ");
      scanf("%d",&b);
      c=a+b;
      printf("\n\nSum of %d and %d is: %d",a,b,c);
      break;
    case 2:
      printf("Enter First Number: ");
      scanf("%d",&a);
      printf("Enter Second Number: ");
      scanf("%d",&b);
      c=a-b;
      printf("\n\nDifference of %d and %d is: %d",a,b,c);
      break;
    case 3:
      printf("Enter First Number: ");
      scanf("%d",&a);
      printf("Enter Second Number: ");
      scanf("%d",&b);
      c=a*b;
      printf("\n\nProduct of %d and %d is: %d",a,b,c);
      break;
    case 4:
      printf("Enter First Number: ");
      scanf("%d",&a);
      printf("Enter Second Number: ");
      scanf("%d",&b);
      c=a/b;
      printf("\n\nDivision of %d and %d is: %d",a,b,c);
      break;
    case 5:
      exit(0);
  }
  getch();
}

