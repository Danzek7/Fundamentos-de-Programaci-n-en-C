#include <stdio.h>
void mostrarLinea(int);
void main(){
	int linea;
	do{
		printf("Ingrese la linea que le interesa del triangulo: ");
		scanf("%i",&linea);
	}while(linea<=0);
	mostrarLinea(linea);
}
void mostrarLinea(int linea){
	int i;
	int j;
	int n;
	n=0;
	for(i=1;i<=linea;i++){
		for(j=1;j<=i;j++){
			n++;
			if(i==linea){
				printf("%i",n);
			}
		}
	}
}
