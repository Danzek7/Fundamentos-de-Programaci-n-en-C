#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	int i;
	float c;
	printf("Ingresar los n primeros numeros de la sucesion: ");
	scanf("%i",&n);
	i=0;
	do 
	{
		i=i+1;
		c=pow(i,2)/pow(2,i)-1;
		printf("Sucesion[%i]= %f ",i,c);
	}while (i!=n);
}
