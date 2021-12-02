#include<stdio.h>
#include<conio.h>
#include<Math.h>
void main()
{
  int flag=0;
  int i,n;
  clrscr();
  printf("Enter any Number: ");
  scanf("%d",&n);
  for(i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
    printf("Number is Not Prime");
  else
    printf("Number is Prime");
  getch();
}