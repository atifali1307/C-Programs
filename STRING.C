#include<stdio.h>
#include<conio.h>
void main()
{
  char n[30];
  int i;
  clrscr();
  gets(n);
  for(i=0;n[i]!='\0';i++);
  printf("Length of String is %d",i);
  printf("\n\nReverse of Stirng is  ");
  for(i=i-1;i>=0;i--)
  {
    printf("%c",n[i]);
  }
  printf("\n\nLower character to Upper case are  ");
  for(i=0;n[i]!='\0';i++)
  {
    if(n[i]>=97&&n[i]<=122)
    {
      n[i]-=32;
    }
    printf("%c",n[i]);
  }
  getch();
}
