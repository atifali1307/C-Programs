#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100]={0},n,i;
  clrscr();
  for(i=0;i<10;i++)
  {
    printf("Enter Movie Rating(1 to 5): ");
    scanf("%d",&n);
    a[n-1]=a[n-1]+1;
  }
  for(i=0;i<5;i++)
  {
    printf("\n\n%d Rating =%d\n",i+1,a[i]);
  }
  getch();
}