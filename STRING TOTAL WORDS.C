//Total Number of words in a string

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[100];
  int i,word;
  clrscr();
  printf("Enter a String: ");
  gets(str);
  i=0;
  word=1;
  while(str[i]!='\0')
  {
    if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
      word+=1;
    i++;
  }
  printf("Total Number of Words in the String is %d",word);
  getch();
}
