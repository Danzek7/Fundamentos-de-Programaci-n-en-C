/* Comprobar si un n�mero es par o impar, y se�alar la posici�n  de memoria donde
se est� guardando el n�mero con punteros*/
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
