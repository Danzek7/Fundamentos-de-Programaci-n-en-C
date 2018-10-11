#include <stdio.h>
void main()
{
	char apellido[15];
	float estatura;
	
	printf("Ingrese un apellido: ");
	scanf("%s", apellido); //No lleva &
	printf("\nIngrese una estatura: ");
	scanf("%f", &estatura);
	
	printf("\nEl apellido es: %s", apellido);
	printf("\nLa estatura es: %f", estatura);
}
