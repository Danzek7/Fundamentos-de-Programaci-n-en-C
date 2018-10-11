#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	int k;
	float suma;
	float x;
	
	printf("Ingrese un numero el ultimo termino de la sumatoria: ");
	scanf("%i",&k);
	
	suma=0;
	for(n=1;n<=k;n++){
		x=(pow(-1,n+1)*(4*sqrt(n)/2*n+3));
		suma=x+suma;
	}
	printf("El resultado de la sumatoria es: %f",suma);
}
