#include<stdio.h>
#include<conio.h>
void main()
{
 int age;
 clrscr();
 printf("Enter age=");
 scanf("%d",&age);
 if(age>=20)
 {
 printf("you are adult");
 }
 else
 {
 printf("you are child");
 }
 getch();
}