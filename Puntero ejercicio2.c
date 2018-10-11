/* Rellenar un array de 10 números, posteriormente utilizando punteros
indicar cuáles son números pares y su posición en memoria*/
#include <stdio.h>
void main(){
	int a[10];
	int i;
	for(i=0;i<10;i++){
		printf("\nIngrese a[%i]: ",i);
		scanf("%i",&a[i]);
	}
	int *an=&a;
	printf("\nNumeros Pares: \n\n");
	for(i=0;i<10;i++){
		if(*an%2==0){
			printf("Numero a[%i]: %i ",i,*an);
			printf("\n Posicion: %p",an);
			printf("\n");
		}
		an++;
	}
}
