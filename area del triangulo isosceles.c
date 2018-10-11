#include <stdio.h>
#include <math.h>
void main ()
{
	int a;
	int b;
	float area;
	float h;
	
	printf("Ingrese los lados A del triangulo: ");
	scanf("%i", &a);
	printf("\nIngrese lado B del triangulo: ");
	scanf("%i", &b);
	
	h=sqrt(pow(a,2)-pow(b,2)/4);
	area=b*h/2;
	
	printf("El area del triangulo isosceles es: %f",area);
	printf("La altura h del triangulo isosceles es: %f", h);
}
