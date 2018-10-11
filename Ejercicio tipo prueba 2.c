#include <stdio.h>
void mostrar(int m[10][10], int nu);
void main(){
	int m[10][10];
	int n;
	do{
		printf("Ingrese el tamanio de la matriz nXn: ");
		scanf("%i",&n);
	}while((n<0)&&(n>10));
	mostrar(m,n);
}
void mostrar(int m[10][10], int nu){
	/*   ej: 4
	1-2-3-4
	4-1-2-3 <-  */
	int i;
	int j;
	for(j=0;j<nu;j++){
		m[0][j]=j+1;
	}
	for(i=1;i<nu;i++){
		m[i][0]=m[i-1][nu-1];
		for(j=1;j<nu;j++){
			m[i][j]=m[i-1][j-1];
		}
	}
	for(i=0;i<nu;i++){
		for(j=0;j<nu;j++){
			printf(" %i - ",m[i][j]);
		}
		printf("\n");
	}
}
