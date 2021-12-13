#include<stdio.h>
#include<conio.h>
void main()
{
  void isUpper(char);
  void isLower(char);
  char a,b;
  clrscr();
  printf("Enter any character: ");
  scanf("%c",&a);
  fflush(stdin);
  isUpper(a);
  printf("\nEnter any Character: ");
  scanf("%c",&b);
  isLower(b);
  getch();
}
void isUpper(char a)
{
  if(a>=65&&a<=90)
    printf("Yes, character is in Upper Case.");
  else
    printf("No, character is not in Upper Case.");
}
void isLower(char b)
{
  if(b>=97&&b<=122)
    printf("Yes, character is in Lower Case.");
  else
    printf("No, character is not in Lower Case.");
}

