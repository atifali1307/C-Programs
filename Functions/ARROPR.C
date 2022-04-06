#include<stdio.h>
#include<conio.h>
void main()
{
  void inputarray(int [],int);
 // void outputarray(int [],int);
  int minele(int [],int);
  int maxele(int [],int);
  int sumarr(int [],int);
  void display(int [],int);
  int ch,n,x;
  char attempt;
  int a[20];
  clrscr();
  do{
  printf("1. Minimum Element of an Array.\n");
  printf("2. Maximum Element of an Array.\n");
  printf("3. Sum of all Elements of an Array.\n");
  printf("4. Display Array Elements.\n");
  printf("5. Exit\n");
  printf("\n\nEnter operation you want to perform: ");
  scanf("%d",&ch);
  switch(ch)
  {
	case 1:
		 printf("\n\nEnter number of Elements you want to insert: ");
		 scanf("%d",&n);
		 inputarray(a,n);
		 x=minele(a,n);
		 printf("\n\nMinimum Element of an Array is: %d",x);
		 break;
	case 2:
		 printf("\n\nEnter number of Elements you want to insert: ");
		 scanf("%d",&n);
		 inputarray(a,n);
		 x=maxele(a,n);
		 printf("\n\nMaximum Element of an Array is: %d",x);
		 break;
	case 3:
		 printf("\n\nEnter Number of Elements you want to insert: ");
		 scanf("%d",&n);
		 inputarray(a,n);
		 x=sumarr(a,n);
		 printf("\n\nSum of all Elements of an Array is: %d",x);
		 break;
	case 4:
		 printf("\n\nEnter Number of Elements you want to insert: ");
		 scanf("%d",&n);
		 inputarray(a,n);
		 display(a,n);
		 break;
	case 5:
		 exit(1);
  }
  fflush(stdin);
  printf("\n\n\nDo you want to continue(y/Y): ");
  scanf("%c",&attempt);
  clrscr();
  }while(attempt=='y' || attempt=='Y');
  getch();
}
void inputarray(int a[],int size)
{
   int i;
   for(i=0;i<size;i++)
   {
	 printf("a[%d]= ",i);
	 scanf("%d",&a[i]);
   }
}
int minele(int a[],int size)
{
  int min=a[0],i;
  for(i=1;i<size;i++)
  {
	if(min>a[i])
	  min=a[i];
  }
  return min;
}
int maxele(int a[],int size)
{
  int max=a[0],i;
  for(i=1;i<size;i++)
  {
	if(max<a[i])
	  max=a[i];
  }
  return max;
}
int sumarr(int a[],int size)
{
  int sum=0,i;
  for(i=0;i<size;i++)
  {
	sum+=a[i];
  }
  return sum;
}
void display(int a[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
	printf("%d ",a[i]);
  }
}




