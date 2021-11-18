#include<stdio.h>
#include<conio.h>
void main()
{
  int marks;
  clrscr();
  printf("Enter Marks: ");
  scanf("%d",&marks);
  if(marks>90)
    printf("Total Marks after Bonus: %d",marks+5);
  else if(marks>80&&marks<90)
    printf("Total Marks after Bonus: %d",marks+3);
  else if(marks>60&&marks<80)
    printf("Total Marks after Bonus: %d",marks+2);
  else if(marks>40 && marks<60)
    printf("Total Marks after Bonus: %d",marks+1);
  else
    printf("You can't get any Bonus points.");
  getch();
}