#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int sum(int,int);
  int sub(int,int);
  int mul(int,int);
  int div(int,int);
  int power(int,int);
  int isprime(int);
  int a,b,c,ch,h=0;
  clrscr();
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Power\n");
  printf("6. Prime\n");
  printf("Enter Your choice: ");
  scanf("%d",&ch);
  printf("Enter Number1: ");
  scanf("%d",&a);
  printf("Enter Number2: ");
  scanf("%d",&b);
  switch(ch)
  {
	case 1:
	{
	  c=sum(a,b);
	  printf("Addition of %d and %d is %d",a,b,c);
	  break;
	}
	case 2:
	{
	  c=sub(a,b);
	  printf("Subtraction of %d and %d is %d",a,b,c);
	  break;
	}
	case 3:
	{
	  c=mul(a,b);
	  printf("Multiplication of %d and %d is %d",a,b,c);
	  break;
	}
	case 4:
	{
	  c=div(a,b);
	  printf("Division of %d and %d is %d",a,b,c);
	  break;
	}
	case 5:
	{
	  c=power(a,b);
	  printf("%d raise to the power %d is %d",a,b,c);
	  break;
	}
	case 6:
	{
	  h=isprime(a);
	  if(h==1)
		printf("No");
	  else
		printf("Yes");
	  break;
	}
  }
  getch();
}
int sum(int a,int b)
{
  int x;
  x=a+b;
  return x;
}
int sub(int a,int b)
{
  int x;
  x=a-b;
  return x;
}
int mul(int a,int b)
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
int power(int a,int b)
{
   int i,l=1;
   for(i=1;i<=b;i++)
   {
	 l=l*a;
   }
   return l;
}
int isprime(int a)
{
  int i,x=0;
  for(i=2;i<=sqrt(a);i++)
  {
	if(a%i==0)
	 { x=1;
	  break;
	  }
  }
  return x;
}


