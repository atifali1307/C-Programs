#include<stdio.h>
#include<conio.h>
struct bank
{
  int accnum,balance;
  char name[30];
}b[10];
void main()
{
  int i,choice,n,bal,a,acc,ch;
  clrscr();
  do
  {
  printf("========== $ WELCOME TO AXIS BANK $ ==========\n\n");
  printf("\t  ======Please Input Customers Data======  \n\n");
  printf("Number of Members you want to see their Data : \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("Customer Account Number : ");
    scanf("%d",&b[i].accnum);
    printf("Name : ");
    scanf("%s",&b[i].name);
    printf("Customer's Current Balance : ");
    scanf("%d",&b[i].balance);
    printf("\n----------------------------------------\n\n");
  }
  printf("\n\n\n");
  printf("Hello Thank You for chosing our bank ! \n");
  printf("\nHow can we help you ? \n");
  printf("1. Customers whose balance is less than 100 : \n");
  printf("2. Transaction : ");
  printf("\nEnter your choice(Press ENTER before you choose)");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
       printf("\n========= Customer with low balance =========\n\n");
       for(i=1;i<=n;i++)
       {
	 if(b[i].balance<100)
	 {
	   printf("\nAccount Number : %d || Name : %s || Balance : %d",b[i].accnum,b[i].name,b[i].balance);
	 }
       }
       printf("\n\n\n========== Please deposite soon ==========\n\n");
       break;
    case 2:
      printf("\nWhat would you like to do : \n\n");
      printf("1. Deposite : \n");
      printf("2. Withdraw : \n");
      printf("Enter process : ");
      scanf("%d",&ch);
      switch(ch)
      {
	case 1:
	  printf("\nDear Customer Please Input Your Account Number : ");
	  scanf("%d",&acc);
	  for(i=0;i<=4;i++)
	  {
	    if(b[i].accnum==acc)
	    {
	      printf("Hello : %s !\nEnter Amount to be deposite ; \n",b[i].name);
	      scanf("%d",&bal);
	      b[i].balance+=bal;
	      printf("\n=====================================\n\n");
	      printf("\nSuccessfully deposited in your account \n");
	      printf("\nAccount Number    : %d",b[i].accnum);
	      printf("\nName              : %s",b[i].name);
	      printf("\nUpdated Balance  is : %d",b[i].balance);
	      printf("\n\n===================================\n\n");
	    }
	  }
	  break;
	  case 2:
	    printf("\nDear Customer Please Input Your Account Number : ");
	  scanf("%d",&acc);
	  for(i=0;i<=4;i++)
	  {
	    if(b[i].accnum==acc)
	    {
	      printf("Hello : %s !\nEnter amount to be withdraw : \n",b[i].name);
	      scanf("%d",&bal);
	      if(bal>b[i].balance)
	      {
		printf("\nThe balance is insufficient for the specified withdrawal\n");
	      }
	      else
	      {
		b[i].balance-=bal;
		printf("\n========================================\n\n");
		printf("\nSuccessfully withdraw from your account \n");
		printf("\nAccount Number    : %d",b[i].accnum);
		printf("\nName              : %s",b[i].name);
		printf("\nUpdated Balance  is : %d",b[i].balance);
		printf("\n\n===================================\n\n");
	      }
	    }
	  }
	  break;
	}
      }
      printf("Do You Want To Continue(Press 1 to continue and any other digit to exit)");
      scanf("%d",&a);
    }while(a==1);
      getch();
    }
