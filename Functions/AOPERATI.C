#include<stdio.h>
#include<conio.h>
void main()
{
  int add(int,int);
  int sub(int,int);
  int mul(int,int);
  int div(int,int);
  int a,b,c,ch;
  clrscr();
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  printf("Enter Number1: ");
  scanf("%d",&a);
  printf("Enter Number2: ");
  scanf("%d",&b);
  switch(ch)
  {
    case 1:
    {
      c=add(a,b);
      break;
    }
    case 2:
    {
      c=subt(a,b);
      break;
    }
    case 3:
    {
      c=mult(a,b);
      break;
    }
    case 4:
    {
      c=div(a,b);
      break;
    }
    default:
    {
      printf("Invalid Choice");
    }
  }
  printf("Result is %d",c);
  getch();
}
int add(int a,int b)
{
  int x;
  x=a+b;
  return x;
}
int subt(int a,int b)
{
  int x;
  x=a-b;
  return x;
}
int mult(int a,int b)
{
  int x;
  x=a*b;
  return x;
}
int div(int a,int b)
{
  int x;
  x=a/b;
  return x;
}
