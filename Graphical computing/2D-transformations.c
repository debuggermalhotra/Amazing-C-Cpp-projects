//2D transformations including translation, scaling, rotation of a line
#include<stdio.h>
#include<graphics.h>
#include<math.h>

//function declaration
void translation();
void rotation();
void scaling();




void main()
{
char ch;
printf("\t\t\tCHETAN MALHOTRA\n\t\t\t14SCSE101072\n");
printf("\n\n\t\t\tPress\n\t\t\t1 for translation\n\t\t\t2 for rotation\n\t\t\t3 for scaling\n\n\t\t\tYour choice: ");
scanf("%s",&ch);
if(ch=='1')
translation();
else if(ch=='2')
rotation();
else if(ch=='3')
scaling();
else
{
printf("Wrong choice");
getchar();
}

getchar();
}

void translation()
{
	int gd=DETECT,gm;  
float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4,t,a,tx,ty;


printf("\nEnter the points of line segment:");
printf("\nX1: ");
scanf("%d",&x1);
printf("\nY1: ");
scanf("%d",&y1);
printf("\nX2: ");
scanf("%d",&x2);
printf("\nY2: ");
scanf("%d",&y2);
printf("\nEnter translation distances tx,ty:\n");  
printf("Tx: ");
scanf("%d",&tx);
printf("\nTy: ");
scanf("%d",&ty);  
initgraph(&gd,&gm,NULL);  
setcolor(5);  
line(x1,y1,x2,y2);  
outtextxy(x2+2,y2+2,"Original line");  
x3=x1+tx;  
y3=y1+ty;  
x4=x2+tx;  
y4=y2+ty;  
setcolor(7);  
line(x3,y3,x4,y4);  
outtextxy(x4+2,y4+2,"Line after translation");  
}

void rotation()
{
	int gd=DETECT,gm;  
float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4,t,a;

printf("\nEnter coordinates of starting point:\n");
scanf("%f%f",&x1,&y1);
printf("\nEnter coordinates of ending point\n");
scanf("%f%f",&x2,&y2);
printf("\nEnter angle for rotation\n");
scanf("%f",&a);
initgraph(&gd,&gm,NULL);
setcolor(5);
line(x1,y1,x2,y2);
outtextxy(x2+2,y2+2,"Original line");
t=a*(3.14/180);
x3=(x1*cos(t))-(y1*sin(t));
y3=(x1*sin(t))+(y1*cos(t));
x4=(x2*cos(t))-(y2*sin(t));
y4=(x2*sin(t))+(y2*cos(t));
setcolor(7);
line(x3,y3,x4,y4);
outtextxy(x3+2,y3+2,"Line after rotation");
}


void scaling()
{
	int gd=DETECT,gm;  
float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4,t,a;

	
printf("\nEnter the line coordinates:");
printf("\nX1: ");
scanf("%d", &x1);
printf("\nY1: ");
scanf("%d", &y1);
printf("\nX2: ");
scanf("%d", &x2);
printf("\nY2: ");
scanf("%d", &y2);  
printf("\nEnter scaling factors:\n");
printf("X Scaling: ");
scanf("%d", &sx);
printf("\nY Scaling: ");
scanf("%d", &sy);  
initgraph(&gd,&gm,NULL); 
setcolor(5);  
line(x1,y1,x2,y2);  
outtextxy(x2+2,y2+2,"Original line");  
x3=x1*sx;  
y3=y1*sy;  
x4=x2*sx;  
y4=y2*sy;  
setcolor(7); 
line(x3,y3,x4,y4);  
outtextxy(x3+2,y3+2,"Line after scaling");  
}	

