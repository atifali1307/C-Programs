#include<stdio.h>
#include<conio.h>
struct bank
{
  int accnum;
  long balance;
  char name[40];
  char mobile[10];
}b[10];
void main()
{
  int i,choice,n,acc,ch;
  long bal;
  char x;
  clrscr();
  do
  {
    printf("\n======== $ Welcome to AXIS BANK $ ========\n\n");
    printf("    ==== Please Input Customers Data ====\n\n");
    printf("Number of Members you want to input their Data: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("\nCustomer Account Number: ");
      scanf("%d",&b[i].accnum);
      printf("\nName: ");
      scanf("%s",&b[i].name);
      printf("\nMobile Number: ");
      scanf("%s",&b[i].mobile);
      printf("\nCustomers Current Balance: ");
      scanf("%ld",&b[i].balance);
      printf("\n--------------------------------------\n\n");
    }
    printf("\n\nThank You for chosing our Bank! \n\n");
    printf("How can we help you? \n\n");
    printf("1. Customers whose balance is less than 500\n");
    printf("2. Transaction");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	printf("\n=========== Customers with low balance ===========\n\n");
	for(i=1;i<=n;i++)
	{
	  if(b[i].balance<500)
	  {
	    printf("\nAccount Number: %d || Name: %s || Mobile Number: %s || Balance: %d",b[i].accnum,b[i].name,b[i].mobile,b[i].balance);
	    printf("\n\nNote =>  Please deposit some amount as soon as possible............\n\n");
	  }
	  else
	  {
	    printf("\nNo Customer found with Balance less then 500.\n\n........................\n");

	  }
	}
	break;
      case 2:
	printf("\nWhat would you like to do: \n\n");
	printf("1. Deposit\n");
	printf("2. Withdraw\n\n");
	printf("Enter Process: ");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
	    printf("\nPlease Input Your Account Number: ");
	    scanf("%d",&acc);
	    for(i=1;i<=n;i++)
	    {
	      if(b[i].accnum==acc)
	      {
		printf("\nHello %s !\n\nEnter Amount to be deposit: ",b[i].name);
		scanf("%ld",&bal);
		if(bal<20000)
		{
		  b[i].balance+=bal;
		  printf("\n==============================\n\n");
		  printf("\nSuccessfully deposited in your account\n");
		  printf("\nAccount Number : %d",b[i].accnum);
		  printf("\nName           : %s",b[i].name);
		  printf("\nMobile Number  : %s",b[i].mobile);
		  printf("\nUpdated Balance: %ld",b[i].balance);
		  printf("\n\n===================================\n\n");
		}
		else
		  printf("\n\nAmount is more.\nPlease Deposit it in 2 parts.");

	      }
	      else
	      {
		printf("\nInvalid Account Number.\nPlease try again with valid Account Number.\n\n");
	      }
	    }
	    break;
	  case 2:
	    printf("\nPlease Input Your Account Number: ");
	    scanf("%d",&acc);
	    for(i=1;i<=n;i++)
	    {
	      if(b[i].accnum==acc)
	      {
		printf("\nHello %s !\n\nEnter amount to Withdraw: ",b[i].name);
		scanf("%ld",&bal);
		if(b[i].balance<bal)
		{
		  printf("\nThe Balance is Insufficient for this Withdrawal");
		}
		else
		{
		  b[i].balance-=bal;
		  printf("\n===================================\n\n");
		  printf("\nWithdrawal Successful from Your Account\n");
		  printf("\nAccount Number  : %d",b[i].accnum);
		  printf("\nName            : %s",b[i].name);
		  printf("\nMobile Number   : %s",b[i].mobile);
		  printf("\nUpdated Balance : %ld",b[i].balance);
		  printf("\n\n======================================\n\n");
		}
	      }
	      else
	      {
		printf("\nInvalid Account Number.\nPlease try again with valid Account Number.");
	      }
	    }
	break;
	}
    }
    printf("\n\nDo you want to continue(y/Y): ");
    fflush(stdin);
    scanf("%c",&x);
    clrscr();
  }while(x=='y' || x=='Y');
  getch();
}