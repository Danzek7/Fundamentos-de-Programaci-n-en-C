#include <stdio.h>
#include <string.h>
void main()
{
	char original[30];
	char parte{7};
	char nueva[21];
	int a;
	printf("Ingrese una palabra: ");
	fgets(original,30,stdin);
	int posicion=strlen(original)-strlen(strstr(original,parte));
	for(a = 0; a < posicion; a++){
		nueva[a]=original[a];
	    printf("Hola");
	}
	for(a= posicion; a < strlen(original); a++){
		nueva[a]=original[a+3];
	    printf("chao");
	}
	nueva[20]='\0';
	printf("La cadena queda: %s",nueva);   
}
