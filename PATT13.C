#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,m,i2,j2,k2,m2;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=5-i;j>0;j--)
    {
      printf(" ");
    }
    for(k=1;k<=i;k++)
    {
      printf("%d",k);
    }
    for(m=i-1;m>0;m--)
    {
      printf("%d",m);
    }
    printf("\n");
  }
  for(i2=5;i2>=1;i2--)
  {
    for(j2=5-i2;j2>0;j2--)
    {
      printf(" ");
    }
    for(k2=1;k2<=i2;k2++)
    {
      printf("%d",k2);
    }
    for(m2=i2-1;m2>0;m2--)
    {
      printf("%d",m2);
    }
    printf("\n");
  }
  getch();
}