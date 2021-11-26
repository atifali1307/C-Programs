#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
  int a,b,i;
  char* r[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  clrscr();
  scanf("%d\n%d",&a,&b);
  for(i=a;i<=b;i++)
  {
    if(i>9)
    {
      if(i%2==0)
	printf("even\n");
      else
	printf("odd\n");
      }
      else
      {
	printf("%s\n",r[i]);
      }
    }
  getch();
}