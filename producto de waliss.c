#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	int i;
	float a1;
	float a2;
	float mul;
	float pii;
	
	printf("Ingrese las cantidad de números a evaluar ");
	scanf("%i",&n);
	pii=1;
	for(i=2;i>=n;i++){
		a1=i-1;
		a2=i+1;
		mul=(i/a1)*(i/a2);
		pii=pii*mul;
		printf("el resultado de %i es: %f",i,pii);
	}
	
}
