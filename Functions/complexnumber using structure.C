#include<stdio.h>
#include<conio.h>
typedef struct complex
{
  int r;
  int i;
}comp;
void main()
{
  comp c1,c2,c3;
  void inputcomplex(comp *);
  void outputcomplex(comp *);
  void additioncomplex(comp *c,comp *a,comp *b);
  clrscr();
  inputcomplex(&c1);
  inputcomplex(&c2);
  additioncomplex(&c3,&c1,&c2);
  outputcomplex(&c1);
  outputcomplex(&c2);
  printf("\n\nAddition of two Complex Numbers is: ");
  outputcomplex(&c3);
  getch();
}
void inputcomplex(comp *n)
{
  printf("\n\nEnter value of Complex Number:");
  printf("\nEnter Real Part: ");
  scanf("%d",&(n->r));
  printf("\nEnter Imaginary Part: ");
  scanf("%d",&(n->i));
}
void outputcomplex(comp *n)
{
  printf("\n(%d + %di)",n->r,n->i);
}
void additioncomplex(comp *c,comp *a,comp *b)
{
  c->r=a->r+b->r;
  c->i=a->i+b->i;
}