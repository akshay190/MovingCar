#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main()
{

int l,t,r,b,x1=25,x2=70,i=25;
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"EGAYGA.BGI");
errorcode=graphresult();
if(errorcode!=grOk)
{
printf("Graphics error %s n",grapherrormsg(errorcode));
printf("Press any key to halt : ");
getch();
exit(1);
}
l=10;
t=getmaxy()-50;
r=l+30;
b=t+30;
 while(i<(getmaxx())) {
outtextxy(100,100,"!!!!!!!!!!YOUR ARE  DRIVING A CAR!!!!!!!!!!!");
line(0,getmaxy(),getmaxx(),getmaxy());
rectangle(l,t,r,b);
rectangle(r,t-50,r+40,b);
l=l+10;
r=r+10;
setcolor(i);
circle(x1,getmaxy()-10,10);
circle(x2,getmaxy()-10,10);
x1=x1+10;
x2=x2+10;
delay(200);
i=i+10;
if(i>(getmaxx()-30)) {
x1=25;x2=70;i=25;
l=10;
t=getmaxy()-50;
r=l+30;
b=t+30;
}
cleardevice();
setbkcolor(245);
	  }
getch();
closegraph();
return(0);
}