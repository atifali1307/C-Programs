#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[30],str2[30];
  int i;
  int stringcmp(char [],char []);
  clrscr();
  printf("Enter String1: ");
  gets(str1);
  printf("Enter String2: ");
  gets(str2);
  i=stringcmp(str1,str2);
  if(i>0)
    printf("String 1 is Greater");
  else if(i<0)
    printf("String 2 is Greater");
  else
    printf("Both String are equal");
  getch();
}
int stringcmp(char str1[],char str2[])
{
  int f=0;
  int i;
  for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
  {
    if(str1[i]!=str2[i])
    {
      f==1;
      return str1[i]-str2[i];
    }
  }
  if(f==0)
    return 0;
}