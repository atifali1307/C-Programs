#include<stdio.h>
#include<conio.h>
void main()
{
  int isvowel(char);
  char ch;
  clrscr();
  printf("Enter any Character: ");
  scanf("%c",&ch);
  if(isvowel(ch))
	printf("Entered Character is a Vowel");
  else
	printf("Entered Character is a Consonant");
  getch();
}
int isvowel(char a)
{
  if(a=='a'|a=='e'|a=='i'|a=='o'|a=='u')
	return 1;
  else
	return 0;
}
