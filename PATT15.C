#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,m,i2,j2,k2,m2,i3,j3,k3,m3,i4,j4,k4,m4;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    for(k=5-i;k>0;k--)
    {
      printf(" ");
    }
    for(m=i;m>0;m--)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i2=1;i2<=5;i2++)
  {
    for(j2=1;j2<=i2;j2++)
    {
      printf("*");
    }
    for(k2=5-i2;k2>0;k2--)
    {
      printf(" ");
    }
    for(m2=i2;m2>0;m2--)
    {
      printf("*");
    }
    printf("\n");
  }

  for(i3=5;i3>=1;i3--)
  {
    for(j3=1;j3<=i3;j3++)
    {
      printf("*");
    }
    for(k3=5-i;k3>0;k3--)
    {
      printf(" ");
    }
    for(m3=i;m3>0;m3--)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i4=1;i4<=5;i4++)
  {
    for(j4=1;j4<=i4;j4++)
    {
      printf("*");
    }
    for(k4=5-i4;k4>0;k4--)
    {
      printf(" ");
    }
    for(m4=i4;m4>0;m4--)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
}