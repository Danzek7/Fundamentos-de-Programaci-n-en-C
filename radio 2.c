#include <stdio.h>
void main ()
{
	int radio;
	//validación del radio. sólo aceptará valores positivos
	do
	{
		printf("\nIngrese el radio del circulo: ");
		scanf("%i",&radio);
	} while(radio<=0);
	printf("\nSe ha ingresado un valor de radio correcto");
}
