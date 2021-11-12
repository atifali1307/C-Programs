#include<stdiio.h>
#include<conio.h>
void main()
{
  int year;
  printf("Enter any Year: ");
  scanf("%d",&year);
  if(year%100!=0 && year%4==0||year%400==0)
  {
    printf("%d is a Leap Year",yearf);
  }
  else
  {
    printf("%d is not a Leap Year",year);
  }
  getch();
}