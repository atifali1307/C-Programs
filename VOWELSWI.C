#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("Enter any Character: ");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("Enterd Character is a Vowel");
      break;
    default:
      printf("Entered Character is a Consonent");
  }
  getch();
}