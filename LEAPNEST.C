#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter any Year: ");
 scanf("%d",&year);
 if(year%100==0)
 {
   if(year%400==0)
   {
     printf("%d is a Leap Year.");
   }
   else
   {
     printf("%d is not a Leap Year.");
   }
 }
 else
 {
   if(year%4==0)
   {
     printf("%d is a Leap Year.");
   }
   else
   {
     printf("%d is not a Leap Year.");
   }
 }
 getch();
}