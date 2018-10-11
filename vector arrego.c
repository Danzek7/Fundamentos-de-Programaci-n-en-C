#include <stdio.h>
void main()
{
	int v[50];
	int n;
	int i;
	int mayor;
	do{
		printf("Ingrese la longitud del vector (menor a 50): ");
		scanf("%i",&n);
	}while(n>50||n<=0);
	for(i=0;i<n;i++){
		printf("Ingrese v[%i]: ",i);
		scanf("%i",&v[i]);
	}
	mayor=v[0];
	for(i=1;i<n;i++){
		if(v[i]>mayor){
			mayor=v[i];
		}
	}
	printf("El mayor valor del vector es: %i",mayor);
}
