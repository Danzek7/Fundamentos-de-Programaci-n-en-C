#include <stdio.h>
#include <math.h>
void main ()
{
	int precio, desc;
	float rebaja, total;
	do
	{
		printf("ingrese el precio inicial del producto: ");
		scanf("%i",&precio);
	}while(precio<0);
	do
	{
		printf("ingrese el descuento del producto: ");
		scanf("%i",&desc);
	}while(desc<0);
	rebaja=(precio*desc)/100;
	total=precio-rebaja;
	printf("el precio final del producto es: %f",total);
}
