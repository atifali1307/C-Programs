#include<stdio.h>
#include<conio.h>
enum planet
{
  mercury=1,
  venus,
  earth,
  mars,
  jupiter,
  saturn,
  uranus,
  neptune
};
void main()
{
  enum planet;
  int p;
  clrscr();
  printf("Enter Planet: ");
  scanf("%d",&p);
  if(p>=mercury && p<=earth)
    printf("This Planet is Near the Sun.");
  else if(p>=mars && p<=saturn)
    printf("This Planet is Far from the Sun.");
  else if(p>=uranus && p<=neptune)
    printf("This Planet is Very Far from the Sun.");
  else
    printf("Wrong Name.");
  getch();
}