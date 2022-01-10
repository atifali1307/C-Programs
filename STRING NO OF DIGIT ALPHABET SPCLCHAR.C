//Number of Alphabet, digit and special characters in a string
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[100];
  int i,alp,digit,splch;
  clrscr();
  alp=digit=splch=i=0;
  printf("Enter a String: ");
  gets(str);
  while(str[i]!='\0')
  {
    if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
      alp+=1;
    else if(str[i]>='0'&&str[i]<='9')
      digit+=1;
    else
      splch+=1;
    i++;
  }
  printf("Number of Alphabets in the String is: %d",alp);
  printf("\nNumber of Digits in the String is: %d",digit);
  printf("\nNumber of Special Character in the String is: %d",splch);
  getch();
}