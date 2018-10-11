#include <stdio.h>
#include <math.h>
int gastos(float M[3][3], int P[3][3], int maq);
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
	do{
		printf("\n¿Que maquina quiere evaluar?: ");
		scanf("%i",&maq);
	}while((maq<1)||(maq>3));
	int indice=gastos(M,P,maq);
	printf("\nEl proveedor mas conveniente es: P%i",indice);
}
int gastos(float M[3][3], int P[3][3], int maq){
	int i;
	int j;
	int k;
	float G[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			G[i][j]=0;
		    for(k=0;k<3;k++){
			    G[i][j]=G[i][j]+(M[i][k]*P[k][j]);
		    }
		}
	}
	int gasto;
	int min;
	gasto=G[maq-1][0];
	min=0;
	for(j=0;j<3;j++){
		if(gasto<G[maq-1][j]){
			gasto=G[maq-1][j];
			min=j;
		}
	}
	return min;
}
