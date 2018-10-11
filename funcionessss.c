#include <stdio.h>
int sumarCifras(int numero)
{
	int suma;
	suma=0;
	do{
		suma=suma+numero%10;
		numero=numero/10;
	}while(numero!=0);
	return suma;
}
