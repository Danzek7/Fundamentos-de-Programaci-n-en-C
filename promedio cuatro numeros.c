#include <stdio.h>
#include <math.h>
void main ()
{
	int n1, n2, n3, n4;
    float suma, prom;
	printf("Ingrese el primer numero: ");
    scanf("%i",&n1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&n2);
    printf("Ingrese el tercer numero: ");
    scanf("%i",&n3);
    printf("Ingrese el cuarto numero: ");
    scanf("%i",&n4);
    suma=n1+n2+n3+n4;
    prom=suma/4;
    printf("El promedio de los cuatro numeros es: %f",prom);
}

