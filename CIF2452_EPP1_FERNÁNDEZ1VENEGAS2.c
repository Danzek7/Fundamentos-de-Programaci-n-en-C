#include <stdio.h>
#include <math.h>
void main()
{
	int base;
	int num;
	int i;
	int n;
	float m;
	float a;
	
	//pusimos la base primero porque ese era el orden que salía en la guía
	do{
		printf("Ingrese la base del numero a evaluar: ");
    	scanf("%i",&base);
	}while(base<0);
	do{
		printf("Ingrese numero a evaluar: ");
	    scanf("%i",&num);
	}while(num<0);
	
	a=0;
	n=num;
	i=0;
	
	do{
		m=(n%10);
		n=trunc(n/10);
		a=m*pow(base,i)+a;
		i=i+1;
	}while(n!=0);
	printf("El resultado del sistema del numero %i en base %i es: %f ",num,base,a);
}
