#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
  int i;
  printf("Number of Arguments: %d",argc);
  for(i=0;i<argc;i++)
  {
    printf("%s\n",argv[i]);
  }
}


// to run this program
// open dos shell from file menu above
// type file name with arguments like (cla1 atif ali khan)
// it will show you the output