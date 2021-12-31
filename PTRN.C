#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,m,i2,j2,k2,m2,a,b,c,d,a2,b2,c2,d2;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(j=1;j<=i;j++)
      printf("*");
    for(k=5-i;k>0;k--)
      printf(" ");
    for(m=i;m>0;m--)
      printf("*");
    printf("\n");
  }
  for(i2=1;i2<=5;i2++)
  {
    for(j2=1;j2<=i2;j2++)
      printf("*");
    for(k2=5-i2;k2>0;k2--)
      printf(" ");
    for(m2=i2;m2>0;m2--)
      printf("*");
    printf("\n");
  }
  for(a=1;a<=5;a++)
  {
    for(b=5-a;b>0;b--)
      printf(" ");
    for(c=1;c<=a;c++)
    {
      if(c==1)
	printf("1");
      else
	printf(" ");
    }
    for(d=a-1;d>0;d--)
    {
      if(d==1)
	printf("1");
      else
	printf(" ");
      printf("\n");
    }
    for(a2=5;a2>=1;a2--)
    {
      for(b2=5-a2;b2>0;b2--)
	printf(" ");
      for(c2=1;c2<=a2;c2++)
      {
	if(c2==1)
	  printf("1");
	else
	  printf(" ");
      }
      for(d2=a2-1;d2>0;d2--)
      {
	if(d2==1)
	  printf("1");
	else
	  printf(" ");
      }
      printf("\n");
    }
    getch();
  }
}