#include <stdio.h>
#include <math.h>
void main ()
{
	int n;
	float rz;
	
	printf("Ingrese un numero: ");
	scanf("%i",&n);
	
	if (n>0)
	{
		rz=sqrt(n);
		printf("La raiz cuadrada de %i es: %f",n,rz);
	}
	else
	    printf("El numero %i no posee raiz cuadrada",n);
}
