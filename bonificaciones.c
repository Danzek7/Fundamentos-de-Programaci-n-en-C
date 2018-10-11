#include <stdio.h>
#include <math.h> 
void main ()
{
	int sueldo;
	int hijos;
	int anos;
	float bonificacion;
	
	printf("Ingrese sueldo del empleado: ");
	scanf("%i",&sueldo);
	printf("\nIngrese hijos del empleado: ");
	scanf("%i",&hijos);
	printf("\nIngrese anos de trabajo del empleado: ");
	scanf("%i",&anos);
	
	if(hijos==0)
	{
		bonificacion=0;
	}
	if(hijos>0 && hijos<=3)
	{
		bonificacion=sueldo*2/100;
	}
	if(hijos>=4)
	{
		bonificacion=sueldo*5/100;
	}
	if(anos>=5 && anos<=10)
	{
		bonificacion=bonificacion+sueldo*3/100;
	}
	if(anos>10)
	{
		bonificacion=bonificacion+sueldo*5/100;
	}
	printf("La bonificacion al sueldo del empleado es: %f",bonificacion);
}
