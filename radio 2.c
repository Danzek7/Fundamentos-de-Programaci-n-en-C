#include <stdio.h>
void main ()
{
	int radio;
	//validaci�n del radio. s�lo aceptar� valores positivos
	do
	{
		printf("\nIngrese el radio del circulo: ");
		scanf("%i",&radio);
	} while(radio<=0);
	printf("\nSe ha ingresado un valor de radio correcto");
}
