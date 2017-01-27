//DDA: Digital differential analyzer algorithm for line drawing

#include<graphics.h>
#include<stdio.h>
#include<math.h>

float pixel(float a);

void main()
{
int gd=DETECT,gm;

int i,x1,x2,y1,y2,steps;
float xincr,yincr,x,y,dx,dy;
printf("Enter x1,y1: ");
scanf("%d %d",&x1,&y1);
printf("Enter x2,y2: ");
scanf("%d %d",&x2,&y2);

initgraph(&gd,&gm,NULL);

dx=x2-x1;
dy=y2-y1;

if(abs(dx)>abs(dy))
	steps=abs(dx);
else
	steps=abs(dy);
	
xincr=dx/steps;
yincr=dy/steps;
x=x1;
y=y1;
for(i=1;i<steps;i++)
{
			delay(100);
			x+=xincr;
			y+=yincr;
			putpixel(pixel(x),pixel(y),WHITE);
}

outtextxy(200,20,"DDA"); 
outtextxy(x1+5,y1-5,"(x1,y1)");
outtextxy(x2+5,y2+5,"(x2,y2)");		
getchar();
closegraph();
}

float pixel(float a)
{
	int b=a+0.5;
	return b;
}


