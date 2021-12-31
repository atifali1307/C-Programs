#include<stdio.h>
#include<conio.h>
void main()
{
  int *a,**x;
  int b;
  int c[10]={1,2,3,4,5,6,7,8,9,0};
  clrscr();
  b=50;
  a=&b;
  printf("%d",*a);     //here we get value of b because a hold address of b
  a=&c[4];
  printf("\n%d",*a);   //here we get value of c[4] because a hold address of c[4]
  a=&c;
  printf("\n%d",*a);   //here we get value of c[0] because array c holds address of first element
  a=c;
  printf("\n%d",*a);   //here we get value of c[0] because we write & or not c holds address of first element
  x=*a;
  printf("\n%d",x);    //here we get value of c[0] x=*a => x=*c from above statement
  getch();
}
