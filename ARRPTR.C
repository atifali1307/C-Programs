#include<stdio.h>
#include<conio.h>
void main()
{
  int *p,i,sum=0;
  clrscr();
  printf("Enter Elements of Array:\n");
  for(i=0;i<5;i++)
    scanf("%d",(p+i));
  printf("\n\nElements of Array are: ");
  for(i=0;i<5;i++)
  {
    sum=sum+*(p+i);
    printf("%d ",*(p+i));
  }
  printf("\n\nSum of all elements of an array are: %d",sum);
  getch();
}
