//Ackerman Function using Recursion

#include<stdio.h>
#include<conio.h>
int ack(int m,int n)
{
  if(m==0)
    return n+1;
  else if(m>0 && n==0)
    return ack(m-1,1);
  else if(m>0 && n>0)
    return ack(m-1,ack(m,n-1));
}
void main()
{
  int ack(int,int);
  int m,n,x;
  clrscr();
  printf("Enter Value of m and n:  ");
  scanf("%d %d",&m,&n);
  x=ack(m,n);
  printf("%d",x);
  getch();
}
