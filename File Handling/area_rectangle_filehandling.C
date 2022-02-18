// Program to calculate area of rectangle using command line argument

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
  int len,bth,area;
  if(argc!=3)  // !=3 because area requires len and bth but argc containg file name as an argument so 3 arguments.
  {
    printf("Sufficient arfuments are missing");
    exit(1);
  }
  len=atoi(argv[1]); // atoi convert string to integer
  bth=atoi(argv[2]);
  area=len*bth;
  printf("Area of Rectangle is %d",area);
}

// to run this program
// open dos shell from file menu above
// type (filerect 10 4)
// it will show the output
