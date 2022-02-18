#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
  cleardevice(); // clear screen, it is a function of graphics.h header file
  circle(320,240,50);
  getch();
  closegraph();
}
