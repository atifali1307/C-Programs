#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[30],str2[30];
  void stringcopy(char [],char []);
  clrscr();
  printf("Enter any String: ");
  gets(str1);
  stringcopy(str1,str2);
  printf("Original String: %s",str1);
  printf("\n\nCopied String: %s",str2);
  getch();
}
void stringcopy(char str1[],char str2[])
{
  int i;
  for(i=0;str1[i]!='\0';i++)
  {
    str2[i]=str1[i];
  }
  str2[i]='\0';
}