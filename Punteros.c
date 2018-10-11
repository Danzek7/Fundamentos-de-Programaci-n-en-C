#include <stdio.h>
#include <math.h>
void main(){
	int ent;
	float rea;
	char cad;
	printf("Ingrese una variable de tipo entero: ");
	scanf("%i",&ent);
	printf("Ingrese una variable de tipo real: ");
	scanf("%f",&rea);
	printf("Ingrese una variable de tipo caracter: ");
	scanf("%c",&cad);
	
	int *e=&ent;
	float *r=&rea;
	char *c=&cad;
	
	printf("\n\nValor de variable: ");
	printf("\nDato int: %i",*e);
	printf("\nPosicion int: %p",e);
	printf("\n\nDato float: %f",*r);
	printf("\nPosicion float: %p",r);
    printf("\n\nDato char: %c",*c);
	printf("\nPosicion char: %p",c);
}
