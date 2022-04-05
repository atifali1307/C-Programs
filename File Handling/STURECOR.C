#include<stdio.h>
#include<conio.h>
void addstudent();
void studentrecord();
void searchstudent();
void deletestudent();
struct student
{
  char name[20];
  int roll_no;
  char course[15];
  float percentage;
};
void main()
{
  int choice;
  clrscr();
  while(choice!=5)
  {
    printf("1. Add Student Record\n");
    printf("2. Students records\n");
    printf("3. Search Student\n");
    printf("4. Delete Record\n");
    printf("5. Exit\n");
    printf("\n\nEnter operation you want to perform: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	   clrscr();
	   addstudent();
	   clrscr();
	   break;
      case 2:
	   clrscr();
	   studentrecord();
	   printf("Press any key to exit\n");
	   getch();
	   clrscr();
	   break;
      case 3:
	   clrscr();
	   searchstudent();
	   printf("\nPress any key to exit");
	   getch();
	   clrscr();
	   break;
      case 4:
	   clrscr();
	   deletestudent();
	   printf("\nPress any key to exit");
	   getch();
	   clrscr();
	   break;
      default:
	   clrscr();
	   getch();
	   printf("Enter a Valid Number");
	   printf("\n\nPress any key to continue");
	   getch();
	   clrscr();
	   break;
    }
  }
}
void addstudent()
{
  char another;
  FILE *fp;
  struct student info;
  do
  {
    clrscr();
    printf("Add Student info \n\n");
    fp=fopen("StudentInfo","a");
    printf("\nEnter Name: ");
    scanf("%s",&info.name);
    printf("\nEnter Roll Number: ");
    scanf("%d",&info.roll_no);
    printf("\nEnter Course: ");
    scanf("%s",&info.course);
    printf("\nEnter Percentage: ");
    scanf("%f",&info.percentage);
    if(fp==NULL)
    {
      fprintf(stderr,"\n\nCan't Open File");
    }
    else
    {
      printf("\n\nRecord stored Successfully");
    }
    fwrite(&info,sizeof(struct student),1,fp);
    fclose(fp);
    printf("\n\nDo you want to add another Record(y/n): ");
    scanf("%s",&another);
  }while(another=='y'||another=='Y');
}
void studentrecord()
{
  FILE *fp;
  struct student info;
  fp=fopen("StudentInfo","r");
  printf("Student Records\n\n\n");
  if(fp==NULL)
  {
    fprintf(stderr,"Can't Open File");
  }
  else
  {
    printf("Records\n");
    printf("------------------\n\n");
  }
  while(fread(&info,sizeof(struct student),1,fp))
  {
    printf("\nStudent Name: %s",info.name);
    printf("\nRoll Number: %d",info.roll_no);
    printf("\nCourse: %s",info.course);
    printf("\nPercentage: %f",info.percentage);
    printf("\n------------------");
  }
  fclose(fp);
  getch();
}
void searchstudent()
{
  FILE *fp;
  struct student info;
  int roll_no,found=0;
  fp=fopen("StudentInfo","r");
  printf("\nSearch Student\n\n\n");
  printf("Enter Roll Number: ");
  scanf("%d",&roll_no);

  while(fread(&info,sizeof(struct student),1,fp))
  {
    if(info.roll_no==roll_no)
    {
      found=1;
      printf("\nStudent Name: %s",info.name);
      printf("\nRoll Number: %d",info.roll_no);
      printf("\nCourse: %s",info.course);
      printf("\nPercentage: %f",info.percentage);
      printf("\n------------------");
    }
  }
  if(!found)
  {
    printf("\nRecord not found");
  }
  fclose(fp);
  getch();
}
void deletestudent()
{
  FILE *fp,*fp1;
  struct student info;
  int roll_no,found=0;
  printf("Delete Student\n\n\n");
  fp=fopen("StudentInfo","r");
  fp1=fopen("temp.txt","w");
  printf("Enter Roll Number: ");
  scanf("%d",&roll_no);
  if(fp==NULL)
  {
    fprintf(stderr,"Can't Open File\n");
  }
  while(fread(&info,sizeof(struct student),1,fp))
  {
    if(info.roll_no==roll_no)
    {
      found=1;
    }
    else
    {
      fwrite(&info,sizeof(struct student),1,fp1);
    }
  }
  fclose(fp);
  fclose(fp1);
  if(found)
  {
    remove("StudentInfo");
    rename("temp.txt","StudentInfo");
    printf("Record deleted successfully");
  }
  if(!found)
  {
    printf("Record Not Found");
  }
  getch();
}

