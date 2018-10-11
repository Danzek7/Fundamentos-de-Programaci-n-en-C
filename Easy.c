#include <stdio.h>
void mostrarLinea(int);
void main(){
	int n;
	do{
		printf("Ingrese la fila a evaluar: ");
		scanf("%i",&n);
	}while(n<=0);
	mostarLinea(n);
}
void mostrarLinea(int nu){
	int i;
	int j;
	int n=0;
	for(i=0;i<=nu;i++){
		for(j=0;j<=i;j++){
			n++;
			if(i==nu){
				printf("%i",n);
			}
		}
	}
}
