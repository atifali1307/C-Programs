// Sorting of string in Lexicographical order.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[5][50],temp[50];
  int i,j;
  clrscr();
  printf("Enter 5 Words: \n");
  for(i=0;i<5;i++)
  {
    gets(str[i]);
  }
  //Sorting String in the Lexicographical order
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(strcmp(str[i],str[j])>0)
      {
	strcpy(temp,str[i]);
	strcpy(str[i],str[j]);
	strcpy(str[j],temp);
      }
    }
  }
  printf("\n\nIn Lexicographical Order\n\n");
  for(i=0;i<5;i++)
  {
    puts(str[i]);
  }
  getch();
}



