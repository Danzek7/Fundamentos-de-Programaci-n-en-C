#include <stdio.h>
#include <math.h>
void main ()
{
	int r1, r2;
	float req;
	
	printf("Ingrese la primera resistencia: ");
	scanf("%i",&r1);
	printf("Ingrese la segunda resistencia: ");
	scanf("%i",&r2);
	
	req=(r1*r2)/(r1+r2);
	
	printf("La resistencia equivalente en paralelo es: %f",req);
}
