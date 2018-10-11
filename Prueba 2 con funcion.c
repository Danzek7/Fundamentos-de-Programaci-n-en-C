#include <stdio.h>
#include <math.h>
void mostrar(float M[3][3],int P[3][3]);
void main(){
	int i;
	int j;
	int maq;
	float M[3][3]={{5,0.4,0.2},{4,0.3,0.1},{3.5,0.5,0.2}};
	int P[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			do{
				printf("\nIngrese proveedor[%i][%i]: ",i,j);
				scanf("%i",&P[i][j]);
			}while(P[i][j]<0);
		}
	}
	mostrar(M,P);
}
void mostrar(float M[3][3],int P[3][3]){
	int i;
	int j;
	int k;
	float G[3][3];
	float suma;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			G[i][j]=0;
		    for(k=0;k<3;k++){
			    G[i][j]=G[i][j]+(M[i][k]*P[k][j]);
		    }
		    printf("\nGasto[%i][%i]: %f ",i,j,G[i][j]);
		}
	}
	for(i=0;i<3;i++){
		suma=0;
		for(j=0;j<3;j++){
			suma=G[i][j]+suma;
		}
		printf("\nEl promedio de gasto para la maquina M%i es: %f",i+1,(suma/3));
	}
}
