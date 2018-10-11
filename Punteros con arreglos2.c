/*Dado un vector de 10 elementos= {1,2,3,4,4,7,8,9,5,4}, escribir un programa en C
(mediante punteros) que muestre las direcciones de memoria de cada elemento del vector.*/
#include <stdio.h>
void main(){
	int v[10]={1,2,3,4,4,7,8,9,5,4};
	int *vc;
	vc=&v; //vc=v[0];
	int i;
	for(i=0;i<10;i++){
		printf("\nDato: v[%i]: %i",i,*vc);
		printf("\n Posicion del vector: %p",vc);
		printf("\n");
		vc++;
	}
	//EL VERDADERO!!!!!!!!!!!!!!
}
