#include <math.h>
#include <stdio.h>
#define PI 3.14159
void main ()
{
	//Declaración de variables
	int radio;
	float area;
	const int iva=19;
	
	printf("Ingrese el radio del circulo: ");
	scanf("%d",&radio);
	
	area=2 * PI * pow(radio,2);
	printf("\nEl area es: %f",area);
	printf("\nEl valor de iva es: %i",iva);
	
	//luego trata de ejecutar esta instrucción
    //iva++;
}
