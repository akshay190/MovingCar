#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
int i,j=0,gd=DETECT,gm;
initgraph(&gd,&gm,"EGAVGA>BGI");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(25,240,"press any key");
getch();
setviewport(0,0,639,440,1);
for(i=0;i<=420;i=i+10,j++)
{
rectangle(50+i,275,150+i,400);
rectangle(150+i,350,200+i,400);
circle(175+i,410,10);
setcolor(j);
delay(300);
if(i==420)
break;
clearviewport();
}
getch();
closegraph();
return(0);
}
