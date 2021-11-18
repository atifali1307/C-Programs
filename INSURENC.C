#include<stdio.h>
#include<conio.h>
void main()
{
  int ins=2500;
  char g,s,c;
  clrscr();
  printf("Enter Gender(m for Male f for Female): ");
  scanf("%c",&g);
  fflush(stdin);
  printf("Do you Smoke(y for Yes n for No): ");
  scanf("%c",&s);
  fflush(stdin);
  printf("Do you drive car(y for Yes n for No): ");
  scanf("%c",&c);
  if(g=='m' && s=='y' && c=='y')
    printf("Insurence Amount you have to Deposit: %d",ins+1000);
  else if(g=='m' && s=='y' && c=='n')
    printf("Insurence Amount you have to Deposit: %d",ins+800);
  else if(g=='m' && s=='n' && c=='y')
    printf("Insurence Amount you have to Deposit: %d",ins+500);
  else if(g=='m' && s=='n' && c=='n')
    printf("Insurence Amount you have to Deposit: %d",ins);
  else
    printf("Wrong Input! Please Try Again.");
  getch();
}