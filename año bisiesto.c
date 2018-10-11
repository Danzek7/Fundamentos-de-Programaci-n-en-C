#include <stdio.h>
void main()
{
	int year;
	printf("Ingrese el año a evaluar: ");
	scanf("%i",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		printf("\nEL año %i es bisiesto",year);
	}else
	    printf("\nEl año %i no es bisiesto",year);
}
