#include <stdio.h>
void main()
{
	int year;
	printf("Ingrese el a�o a evaluar: ");
	scanf("%i",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		printf("\nEL a�o %i es bisiesto",year);
	}else
	    printf("\nEl a�o %i no es bisiesto",year);
}
