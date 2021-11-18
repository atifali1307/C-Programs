#include<stdio.h>
#include<conio.h>
void main()
{
  char x;
  clrscr();
  printf("Enter any Character: ");
  scanf("%c",&x);
  if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    printf("%c is a Vowel.",x);
  else
    printf("%c is a Consonant.",x);
  getch();
}