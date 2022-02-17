// Write data in file using fprintf() function
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp1;
  int rollno;
  char name[10];
  char ch='y';
  clrscr();
  fp1=fopen("abc.txt","ab");
  if(fp1==NULL)
  {
    printf("Unable to open File");
    getch();
    return;
  }
  while(ch=='y')
  {
    printf("Enter Student Roll Number: ");
    scanf("%d",&rollno);
    printf("Enter Student Name: ");
    scanf("%s",&name);
    fprintf(fp1,"%d%s",rollno,name);
    fflush(stdin);
    printf("Do you want to add more record(y/n)");
    ch=getche();
  }
  fclose(fp1);
}