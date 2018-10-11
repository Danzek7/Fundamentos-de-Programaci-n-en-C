#include <stdio.h>
#include <math.h>
void main ()
{
	int a, b, c;
	float x1, x2;
	printf("ingrese a: ");
	scanf("%i",&a);
	printf("ingrese b: ");
	scanf("%i",&b);
	printf("ingrese c: ");
	scanf("%i",&c);
	if (a!=0)
	{
		x1=(-b+sqrt(pow(b,2)-4*a*c)/2);
		x2=(-b-sqrt(pow(b,2)-4*a*c)/2);
		printf("x+ es igual a: %f",x1);
		printf("x- es igual a: %f",x2);
	}
}
