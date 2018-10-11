#include <stdio.h>
void main()
{
	int v[50];
	int i;
	int n;
	int fin;
	do{
		Printf("Ingrese la última posicion del vector: ");
	    scanf("%i",&fin);
	}while(fin<0&&fin>50);
	for(i=0;i<fin;i++){
		printf("\nIngrese el elemento v[%i]: ",i);
		scanf("%i",&v[i]);
	}
	do{
		printf("\nIngrese posicion a analizar del vector: ");
	    scanf("%i",&n);
	}while(n<0&&n>fin);
	for(i=0;i<9;i++){
		if(i=n){
			printf(" %i ",v[i]);
		}
	}
}
