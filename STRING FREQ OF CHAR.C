// Count frequency of character in a string

#include<stdio.h>
#include<conio.h>
void main()
{
  char str[100],ch;
  int i,count=0;
  clrscr();
  printf("Enter a String: ");
  gets(str);
  printf("Enter a character to find its frequency: ");
  scanf("%c",&ch);
  for(i=0;str[i]!='\0';i++)
  {
    if(ch==str[i])
      count+=1;
  }
  printf("Frequency of %c = %d",ch,count);
  getch();
}
