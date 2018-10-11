#include <stdio.h>
#include <math.h>
void main ()
{
	int dolar;
	float euro;
	float clp;
	printf("Ingrese cantidad en dolares a evaluar: $");
	scanf("%i",&dolar);
	euro=1.33250*dolar;
	clp=640.204866*dolar;
	printf("El valor de la cantidad de $%i dolares en euros es: %f ",dolar,euro);
	printf("El valor de la cantidad de $%i dolares en pesos chilenos es: %f",dolar,clp);
}
