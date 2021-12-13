#include<stdio.h>
#include<conio.h>
void main()
{
  void toUpper(char *);
  void toLower(char *);
  char a;
  clrscr();
  printf("Enter any Character: ");
  scanf("%c",&a);
  toUpper(&a);
  printf("\nCharacter in Upper Case is %c",a);
  toLower(&a);
  printf("\nCharacter in Lower Case is %c",a);
  getch();
}
void toUpper(char *a)
{
  *a-=32;
}
void toLower(char *a)
{
  *a+=32;
}