#include<stdio.h>
#include<conio.h>
struct data
{
  int rollno;
  int yoj;
  char name[20];
  char department[20];
  char course[15];
}a[2];
void year()
{
  int i;
  int year;
  printf("\nEnter the year : \n");
  scanf("%d",&year);
  for(i=0;i<2;i++)
    if(year==a[i].yoj)
      printf("\nRoll number : %d",a[i].rollno);
      printf("\nName : %s",a[i].name);
      printf("\nDepartment : %s",a[i].department);
      printf("\nCourse : %s",a[i].course);

}
void rollnumber()
{
  int i,roll;
  printf("\nEnter the Roll number : \n");
  scanf("%d",&roll);
  for(i=0;i<2;i++)
    if(roll==a[i].rollno)
    {
      printf("\nName : %s",a[i].name);
      printf("\nDepartment : %s",a[i].department);
      printf("\nCourse : %s",a[i].course);
      printf("\nYear of Joining : %d",a[i].yoj);
    }
}
void main()
{
  int i,b;
  int roll;
  char ch;
  clrscr();
  do
  {
  printf("============ ENTER DETAILS OF THE STUDENT ============\n\n");
  for(i=0;i<2;i++)
  {
    printf("\nEnter the Roll number of the Student : ");
    scanf("%d",&a[i].rollno);
    printf("\nEnter the Name of the Student : ");
    scanf("%s",&a[i].name);
    printf("\nEnter Course name: ");
    scanf("%s",&a[i].course);
    printf("\nEnter Department : ");
    scanf("%s",&a[i].department);
    printf("\nEnter the year of joining : ");
    scanf("%d",&a[i].yoj);
    printf("\n\n");
  }
  printf("What Do You Want To See......");
  printf("\n\n1. Detail of Student by Roll number.");
  printf("\n2. Detail of Student by Yearwise.");
  printf("\n\nEnter your choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:  rollnumber();  break;
    case 2:  year();  break;
  }
  printf("\nDo You Want To Continue(Press 1 to continue any other number to exit)");
  scanf("%d",&b);
 }while(b==1);
  getch();
}

