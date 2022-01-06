#include<stdio.h>
#include<conio.h>
void main()
{
  char str[30];
  int i;
  int stringpalindrome(char []);
  clrscr();
  gets(str);
  if(stringpalindrome(str))
    printf("String is Palindrome");
  else
    printf("String is no a Palindrome");
  getch();
}
int stringpalindrome(char str[])
{
  int i,l,k;
  l=strlen(str);
  k=l-1;
  for(i=0;i<=l/2;i++)
  {
    if(str[i]!=str[k--])
    {
      return 0;
    }
  }
  return 1;
}
