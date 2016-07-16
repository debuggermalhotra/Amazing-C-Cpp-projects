// program to find the roots of a quadratic equation.
#include "stdio.h"
#include "math.h"
void main()
{
	int a, b, c;
	double disc, r1, r2, real, imag;
	printf("Enter values of a, b and c (ax^2+bx+c): ");
	scanf("%d%d%d",&a,&b,&c);
	disc=(b*b)-(4*a*c);
	if(disc<0)
	{
		printf("Roots are imaginary\n");
		real = -b/(2.0*a);
		imag = sqrt(-disc)/(2.0*a);
		printf("\nRoot 1 is: %d + i %lf",real,imag);
		printf("\nRoot 2 is: %d - i %lf",real,imag);
	}
	else if(disc==0)
	{
		printf("Roots are real and equal\n");
		r1=-b/(2.0*a);
		r2=r1;
		printf("\nRoot 1 is: %lf",r1);
		printf("\nRoot 2 is: %lf",r2);
	}
	else
	{
		printf("Roots are real and distinct\n");
		r1=(-b+sqrt(disc))/(2.0*a);
		r2=(-b-sqrt(disc))/(2.0*a);
		printf("\nRoot 1 is: %lf",r1);
		printf("\nRoot 2 is: %lf",r2);
	}
	getch();
}
