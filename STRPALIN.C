#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[20];
  int l,i,flag=0;
  clrscr();
  printf("Enter any String: ");
  scanf("%s",s);
  l=strlen(s);
  for(i=0;i<l;i++)
  {
    if(s[i]!=s[l-i-1])
    {
      flag=1;
      break;
    }
  }
  if(flag)
    printf("String is Not Palindrome");
  else
    printf("String is Palindrome");
  getch();
}

