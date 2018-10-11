#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	int x;
	int j;
	int k;
	int res;
	int acum;
	do
	{
		printf("Ingrese botellas ingresadas para fabricar una: ");
		scanf("%i",&x);
	}while(x<=0);
	do
	{
		printf("Ingrese cantidad inical de botellas a reciclar: ");
		scanf("%i",&n);
	}while(n<x);
	acum=0;
	do
	{
		j=trunc(n/x);
		k=n%x;
		res=k+j;
		acum=acum+j;
	}while(k>0);
	printf("La cantidad de botellas acumuladas son: %i",acum);
}
