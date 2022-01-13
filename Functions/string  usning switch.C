#include<stdio.h>
#include<conio.h>
void main()
{
  char str[50],choice;
  int ch,x;
  void frequency(char []);
  int words(char []);
  void check(char []);
  clrscr();
  do
  {
  printf("\n\n         Strings");
  printf("\n\n1. Frequency of a character in a string");
  printf("\n2. Total number of words in a string");
  printf("\n3. Count number of alphabets, digits and special symbols in a string");
  fflush(stdin);
  printf("\n\nEnter  any String: ");
  gets(str);
  printf("\n\nEnter choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    {
      frequency(str);
      break;
    }
    case 2:
    {
      x=words(str);
      printf("\n\nTotal Number of Words in the String is %d",x);
      break;
    }
    case 3:
    {
      check(str);
      break;
    }
    default:
      printf("Invalid Choice");
  }
  fflush(stdin);
  printf("\n\nDo you want to continue(y/Y): ");
  scanf("%c",&choice);
  clrscr();
  }while(choice=='y'||choice=='Y');
  getch();
}

int words(char str[])
{

  int i=0,word=1;
  while(str[i]!='\0')
  {
    if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
      word+=1;
    i++;
  }
  return word;
}


void frequency(char str[])
{
  int i,count=0;
  char ch;
  fflush(stdin);
  printf("\nEnter character you want to check frequency: ");
  scanf("%c",&ch);
  for(i=0;str[i]!='\0';i++)
  {
    if(ch==str[i])
      count+=1;
  }
  printf("\nFrequency of %c = %d",ch,count);
}

void check(char str[])
{
  int alp=0,splch=0,digit=0,i=0;
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
  printf("\n\nNumber of Alphabets in the String is: %d",alp);
  printf("\n\nNumber of Digits in the String is: %d",digit);
  printf("\n\nNumber of Special Character(including space) in the String is: %d",splch);
}