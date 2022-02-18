#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
  FILE *fp1;
  char ch;
  fp1=fopen(argv[1],"rb");
  while((ch=fgetc(fp1))!=EOF)
    printf("%c",ch);
  fclose(fp1);
}


// to run this
// open dos from file menu above
// type (filetype ali.txt)
// it will show the output
