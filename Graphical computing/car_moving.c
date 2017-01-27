#include<stdio.h>
#include<graphics.h>

void main()
{
int i;
int gd,gm=VGAMAX;
gd=DETECT;
initgraph(&gd,&gm,NULL);
for(i=0;i<100;i=i+25)
{
setcolor(RED);
line(200+i,100,400+i,100);
line(200+i,100,200+i,200);
line(100+i,200,200+i,200);
line(200+i,150,400+i,150);
line(400+i,100,400+i,200);
line(400+i,200,500+i,200);
line(500+i,200,500+i,300);
line(100+i,200,100+i,300);
line(100+i,300,150+i,300);
line(250+i,300,350+i,300);
line(450+i,300,500+i,300);
circle(200+i,300,50);
circle(400+i,300,50);
delay(1000);
cleardevice();
}
getchar();
}
