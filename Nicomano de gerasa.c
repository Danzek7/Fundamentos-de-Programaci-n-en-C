#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	int i;
	float l;
	float d;
	float k;
	float s;
	printf("Ingrese la cantidad de numeros a evaluar: ");
	scanf("%i",&n);
	i=0;
    do
    {
    	i=i+1;
    	k=pow(i,3);
        printf("[%i]^3= %f ",i,k);
	}while(i!=n);
	l=1;
	s=0;
    do
	{
		s=s+l;
		l=l+2;
		d=l+(i*2);
		printf("[%i]^3= %f ",i,s);
	}while(l<n);
	
}
