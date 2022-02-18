//Program to make the copy argument using file handling

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])//argc->argument count,argv->argument value
{
  char ch;
  FILE *fp1,*fp2;
  if(argc!=3)
  {
    printf("Number of arguments are mismatched");
    exit(1);
  }
  // argv[0] contain file name which works as a command
  fp1=fopen(argv[1],"r");
  fp2=fopen(argv[2],"w");
  while((ch=fgetc(fp1))!=EOF)
  {
    fputc(ch,fp2);
  }
  printf("One File is copied Successfully");
  fclose(fp1);
  fclose(fp2);
}

// to run this
// open dos from file menu above
// type (programname source_file_name destination_file_name)
// filecopy ali.txt def.txt
// it will show the output
