// Program to check whether the Number is Even or Odd using command line arguments

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
  int num;
  if(argc!=2)
  {
    printf("Sufficient argument are missing");
    exit(1);
  }
  num=atoi(argv[1]);
  if(num%2==0)
    printf("Number is Even");
  else
    printf("Number is Odd");
}

// to run this program
// open dos shell from file menu above
// type (fileevod 8)
// it will show you the output
