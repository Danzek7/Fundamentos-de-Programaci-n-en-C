#include <stdio.h>
void main()
{
	int i;
	int n;
	int num;
	do{
		printf("Ingrese la ultima posicicion del vector: ");
		scanf("%i",&n);
	}while(n<0);
	int v[n];
	for(i=0;i<n;i++){
		printf("Ingrese el elemento v[%i]: ",i);
		scanf("%i",&v[i]);	
	}
	do{
		printf("Ingrese el numero que se quiere encontrar: ");
	    scanf("%i",&num);
	}while(num<v[0]&&num>v[n]);
	for(i=0;i<n;i++){
		if(v[i]==num){
			printf("Se encontro el %i en el indice: %i",num,i);
		}	
	}
}
