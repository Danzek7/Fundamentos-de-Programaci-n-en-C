#include <stdio.h>
#include <math.h>
void main ()
{
	int v0, y0, g, angulo;
	float ymas;
	do
	{
		printf("Ingrese la velocidad inicial: ");
		scanf("%i",&v0);
		printf("Ingrese la distancia inicial: ");
		scanf("%i",&y0);
		printf("Ingrese los gramos: ");
		scanf("%i",&g);
		printf("Ingrese angulo: ");
		scanf("%i",&angulo);
	}while(v0<0&&y0<0&&g<0&&angulo>90&&angulo<0);
	ymas=((pow(v0,2))*pow((sin(angulo)),2)+y0)/2*g;
	printf("La distancia maxima es: %f",ymas);
}
