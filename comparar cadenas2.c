#include <stdio.h>
#include <string.h>
void main()
{
	char cadena[50]="Hola cómo estás";
	int tamanio;
	
	tamanio=strlen(cadena);
	printf("\nEl tamaño del nombre es: %i",tamanio);
}
