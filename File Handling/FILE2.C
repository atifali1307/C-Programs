// Read Data from abc.txt file using fscanf() function.
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp1;
  int r;
  char n[10];
  clrscr();
  fp1=fopen("abc.txt","rb");
  if(fp1==NULL)
  {
    printf("Unable to Open File");
    getche();
    return;
  }
  while((fscanf(fp1,"%d%s",&r,&n))!=EOF)
  {
    printf("%d  %s",r,n);
  }
  fclose(fp1);
  getch();
}
