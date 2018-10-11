/* Comprobar si un número es par o impar, y señalar la posición  de memoria donde
se está guardando el número con punteros*/
#include <stdio.h>
#include <math.h>
void main(){
	int n;
	printf("Ingrese un numero: ");
	scanf("%i",&n);
	int *nu=&n;
	if(n%2==0){
		printf("\nEl numero %i es par",*nu);
	}else{
		printf("\nEl numero %i es impar",*nu);
	}
	printf("\nPosicion: %p",nu);
}
