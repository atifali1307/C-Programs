#include<stdio.h>
#include<conio.h>
void main()
{
  int n=50;
  int *p;
  clrscr();
  p=&n;
  printf("Address of p variable is %u\n\n",p);
  p=p+1;
  printf("After Increment: Address of p variable is %u\n\n",p);
  p=p-1;
  printf("After Decrement: Address of p variable is %u\n\n",p);
  p=p+4;
  printf("After adding 3: Address of p variable is %u\n\n",p);
  p=p-2;
  printf("After subtracting 2: Address of p variable is %u\n\n",p);

  getch();
}
