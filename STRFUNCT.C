#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,x;
  char s1[20]="Atif",s2[20]="Ali",s3[40]="Khan",s4[40],s5[10]="Kh",s6[10]="Patel";
  char a[40]="Hello Everyone! How are you all?",b[10]="How";
  clrscr();
  n=strlen(s1);
  printf("Length of %s is %d\n\n",s1,n);
  strcat(s1,s2);
  printf("Concatenation: %s\n\n",s1);
  strncat(s1,s3,4);
  printf("strncat function: %s\n\n",s1);
  strcpy(s4,s1);
  printf("strcpy function: %s\n\n",s4);
  n=strcmp(s1,s4);
  printf("strcmp function: %d\n\n",n);
  x=strcspn(s4,s5);
  printf("The First character is matched at %d\n\n",x+1);
  strlwr(s6);
  printf("String in Lower Case is %s",s6);
  strupr(s6);
  printf("\n\nStringin Upper Case is %s",s6);
  strrev(s6);
  printf("\n\nReverse of String is: %s",s6);
  getch();
}