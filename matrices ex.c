#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i;
	int j;
	int cont;
	int filas;
	int columnas;
	int matriz[i][j];
	int matriz2[j][i];
	int suma;
	int suma2;
	int suma3;
	int vecinos;
	int diagonal;
	do{
		printf("ingrese columnas de la matriz: ");
		scanf("%i",&filas);
	}while(filas<0);
	do{
		printf("Ingrese filas de la matriz: ");
		scanf("%i",&columnas);
	}while(columnas<0);
    for(i=0;i<filas;i++){
    	for(j=0;j<columnas;j++){
    		printf("Ingrese el elemento m[%d,%d]: ",i,j);
			scanf("%i",&matriz[i][j]);
		}
	}
    //////////////////////////////
    printf("\n");
    for(i=0;i<filas;i++){
    	for(j=0;j<columnas;j++){
    		printf("%i",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(j=0;j<columnas;j++){
		for(i=0;i<filas;i++){
			printf("%i",matriz2[j][i]);
		}
		printf("\n");
	}
	//////////////////////////////////////
	suma=0;
    for(i=1;i<filas;i++){
    	for(j=0;j<columnas-1;j++){
    		if(i>j&&i!=j){
    			suma=matriz[i][j]+suma;
			}
		}
	}
	if(suma==0){
		printf("\nEs una matriz triangular superior ");
	}
	///////////////////////////////////////
	suma2=0;
	for(i=0;i<filas-1;i++){
		for(j=1;j<columnas;j++){
			if(i<j&&i!=j){
				suma2=matriz[i][j]+suma2;
			}
		}
	}
	if(suma2==0){
		printf("\nEs una matriz triangular inferior ");
	}
	////////////////////////////////////////
    vecinos=0;
	diagonal=0;
	suma3=0;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(i==j&&matriz[i][j]!=0){
			    diagonal=1;
				suma3=matriz[i][j]+suma3;	
			}
			if(i!=j&&matriz[i][j]==0){
				vecinos=1;
			}
		}
	}
	if(diagonal==1&&vecinos==1&&suma3!=columnas){
		printf("\nEs una matriz diagonal");
	}
	if(diagonal==1&&vecinos==1&&suma3==columnas){
		printf("\Es una matriz identidad");
	}
	
}
