#include <stdio.h>
#include <string.h>
void main()
{
	char nombre[10];
	int j=0;
	
	printf("Ingresa tu nombre: ");
	scanf("%s",&nombre);
	while (nombre[j]!='\0'){
		j=j+1;
	}
	printf("\nEl tamaño del nombre es: %i",j);
}
