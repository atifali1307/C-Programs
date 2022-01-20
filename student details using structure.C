#include<stdio.h>
#include<conio.h>
struct data
{
  int rollno;
  int yoj;
  char name[50];
  char department[30];
  char course[20];
  char mobile[10];
  char city[50];
}a[2];
void main()
{
  int i,roll;
  char ch;
  clrscr();
  printf("\n\n-----==========Enter Details of the Student==========-----\n\n");
  for(i=0;i<2;i++)
  {
    printf("\nEnter the Roll Number of the Student: ");
    scanf("%d",&a[i].rollno);
    printf("\nEnter the name of the Student: ");
    scanf("%s",a[i].name);
    printf("\nEnter city of the Student: ");
    scanf("%s",&a[i].city);
    printf("\nEnter Course name: ");
    scanf("%s",&a[i].course);
    printf("\nEnter Department: ");
    scanf("%s",&a[i].department);
    printf("\nEnter Year of Joining: ");
    scanf("%d",&a[i].yoj);
    printf("\nEnter Mobile Number: ");
    scanf("%s",&a[i].mobile);
    printf("\n\n");
  }
  printf("What do you want to see.....");
  printf("\n\n1. Details of Student by Roll Number");
  printf("\n2. Details of Student Yearwise");
  printf("\n\nEnter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:  rollnumber();  break;
    case 2:  year();   break;
  }
  getch();
}
void year()
{
  int i;
  int year;
  printf("\nEnter the year: ");
  scanf("%d",&year);
  for(i=0;i<2;i++)
  {
    if(year==a[i].yoj)
    {
      printf("\n\nRoll Number: %d",a[i].rollno);
      printf("\nName: %s",a[i].name);
      printf("\nCity: %s",a[i].city);
      printf("\nMobile: %s",a[i].mobile);
      printf("\nCourse: %s",a[i].course);
      printf("\nDepartment: %s",a[i].department);
    }
  }
}
void rollnumber()
{
  int i,roll;
  printf("\nEnter the Roll Number: ");
  scanf("%d",&roll);
  for(i=0;i<2;i++)
  {
    if(roll==a[i].rollno)
    {
      printf("\n\nName: %s",a[i].name);
      printf("\n\nCity: %s",a[i].city);
      printf("\n\nMobile: %s",a[i].mobile);
      printf("\n\nCourse: %s",a[i].course);
      printf("\n\nDepartment: %s",a[i].department);
      printf("\n\nYear of Joining: %d",a[i].yoj);
    }
  }
}