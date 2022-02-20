#include<stdio.h>
#include<conio.h>
enum days
{
  monday=1,
  tuesday,
  thursday,
  friday,
  saturday,
  sunday
};
void main()
{
  int a;
  clrscr();
  printf("Enter any Day: ");
  scanf("%d",&a);
  if(a==monday)
    printf("Mondays are Bad.");
  else if(a>=tuesday && a<=thursday)
    printf("Midweek days are so-so");
  else if(a==friday)
    printf("Friday are Better.");
  else if(a==saturday || a==sunday)
    printf("Weekends are Best.");
  else
    printf("Day does not exist.");
  getch();
}
