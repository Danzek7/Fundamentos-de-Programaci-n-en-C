#include <stdio.h>
void main ()
{
	int x, y, num, pot, mul;
	
	printf("Ingrese el número base: ");
	scanf("%i",&x);
	printf("Ingrese número elevado: ");
	scanf("%i",&y);
	
	if (y==0)
	{
		printf("El resultado de la potencia es: 1");
	}
	if (x==0)
	{
		printf("El resultado de la potencia es: 0");
	}
	if (y==1)
	{
		printf("El resultado de la potencia es: %i",x);
	}
	num=x;
	pot=y;
	while (pot!=0);
	{
		pot=y-1;
		mul=x*x;
	}
	printf("El resultado de la potencia es: %i",mul);
}
