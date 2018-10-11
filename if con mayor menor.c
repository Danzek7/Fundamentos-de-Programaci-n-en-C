#include <stdio.h>
#include <math.h>
void main ()
{
	int a, b;
	
	printf("Ingrese el primer numero: ");
	scanf("%i",&a);
	printf("\nIngrese el segundo numero: ");
	scanf("%i",&b);
	
	if (a>b)
	{
		
		printf("\nEl numero mayor es: %i",a);
		printf("\nEl numero menor es: %i",b);
		
	}
		if (a<b)
	{
		
		printf("\nEl numero mayor es: %i",b);
		printf("\nEl numero menor es: %i",a);
		
	}
}
