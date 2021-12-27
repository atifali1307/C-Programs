#include<stdio.h>
#include<conio.h>
void main()
{
  int sumofelements(int [],int);
  void inputarray(int [],int);
  void searchelement(int [],int);
  void replace(int [],int);
  int a[10],n,i,x,p;
  char ch;
  clrscr();

  printf("Enter number of elements you want to insert: ");
  scanf("%d",&n);
  inputarray(a,n);
  do{
  clrscr();
  printf("\n\n1. Display Array.\n");
  printf("2. Search Element\n");
  printf("3. Replace Element\n");
  printf("4. Summation of all Elements of Array.\n");
  printf("\nEnter choice: ");
  scanf("%d",&p);
  switch(p)
  {
    case 1:
    {
       printf("\nArray Elements are:\n\n");
       for(i=0;i<n;i++)
       {
	 printf("%d ",a[i]);
       }
       break;
    }
    case 2:
    {
      searchelement(a,n);
      break;
    }
    case 3:
    {
      replace(a,n);
      printf("New Array is: ");
      for(i=0;i<n;i++)
      {
	printf("%d ",a[i]);
      }
      break;
    }
    case 4:
    {
      x=sumofelements(a,n);
      printf("\nSum of all Elements of Array are: %d",x);
      break;
    }
    default:
    {
      printf("Invalid Choice.");
      break;
    }
  }
  fflush(stdin);
  printf("\nDo you want to continue: ");
  scanf("%c",&ch);
  }while(ch=='y'||ch=='Y');
  getch();
}
int sumofelements(int a[],int size)
{
  int i,sum=0;
  for(i=0;i<size;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void searchelement(int a[],int size)
{
  int x,i;
  printf("\nEnter element you want to search: ");
  scanf("%d",&x);
  for(i=0;i<size;i++)
  {
    if(a[i]==x){
      printf("Yes, %d is present in this Array at index %d.",a[i],i);
      break;
    }
  }
  printf("Element Not found in this Array");
}
void inputarray(int a[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
}
void replace(int a[],int size)
{
  int i,n;
  printf("\nEnter Index where you want to replace element: ");
  scanf("%d",&i);
  printf("Enter Element you want to insert in array: ");
  scanf("%d",&n);
  a[i]=n;
}
