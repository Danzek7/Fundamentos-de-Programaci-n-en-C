#include <stdio.h>
#include <math.h>
void main ()
{
	int  k;
	float x, suma;
	
	suma=0;
	
	for(k=1;k<=6;k++){
    	x=sin((3.14*k)/2);
		suma=x+suma;	
	}
		
	printf("el resultado de la sumatoria sen((pi*k)/2) es: %f",suma);
}
