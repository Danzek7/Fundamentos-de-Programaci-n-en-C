#include <stdio.h>
#include <math.h>
void main()
{
	int x;
	int y;
	int pot;
	int mul;
	printf("Ingrese el numero base: ");
	scanf("%i",&x);
	printf("Ingrese el numero elevado: ");
	scanf("%i",&y);
    if(y==0)
    {
    	printf("EL resultado de la potencia es 1");
	}
	if(x==0)
	{
		printf("El resultado de la potencia es 0");
	}
	if(y==1)
	{
		printf("El resultado de la potencia es %i",x);
	}
	do
	{
		pot=y-1;
		mul=x*x;	
	}while(pot != 1);
	printf("El resultado de la potencia es: %f",mul);
}
