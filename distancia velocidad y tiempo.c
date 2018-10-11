#include <stdio.h>
#include <math.h>
void main ()
{
	int v0, t, a;
	float d;
	do
	{
		printf("Ingrese Velocidad incial: ");
	    scanf("%i",&v0);
	    printf("Ingrese tiempo: ");
	    scanf("%i",&t);
	    printf("Ingrese aceleracion: ");
	    scanf("%i",&a);	
	}while(v0<0&&t<0);
	d=v0*t+(1/2)*a*(pow(t,2));
	printf("La distancia recorrida es: %f",d);
}
