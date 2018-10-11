#include <stdio.h>
void main()
{
	int vector[10];
	int i;
	int n;
	int suma;
	//ver ejercicio de arreglos en power
	for(i=0;i<8;i++){
		printf("\nIngrese un valor para vector[%i]: ",i);
		scanf("%i",&vector[i]);
	}
	suma=0;
	for(i=0;i<8;i++){
		if(i%2==0){
			printf("\nVector[%i]: %i",i,vector[i]);	
	    }else
		    suma=suma+vector[i];
	}
	printf("La suma total de la celdas impares es: %i",suma);
}
