//String and Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
  char name[]="Atif Ali Khan";
  char *nameptr;
  clrscr();
  printf("%c",*name);
  printf("%c",*(name+1));
  printf("%c",*(name+6));
  nameptr=name;
  printf("%c",*nameptr);
  printf("%c",*(nameptr+1));
  printf("%c",*(nameptr+6));
  getch();
}