#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  int b;
  long int c;
  float d;
  double e;
  clrscr();
  printf("Size of char is %d byte.\n",sizeof(a));
  printf("Size of int is %d byte.\n",sizeof(b));
  printf("Size of long int is %d byte.\n",sizeof(c));
  printf("Size of float is %d byte.\n",sizeof(d));
  printf("Size of double is %d byte.",sizeof(e));
  getch();
}
