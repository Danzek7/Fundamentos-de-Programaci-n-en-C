#include <stdio.h>
#include <math.h>
void main()
{
	int a;
	int b;
	int x;
	float fx=0;
	printf("ingrese el el numero inicial de la sumatoria(a): ");
	scanf("%i",&a);
	printf("ingrese el el numero final de la sumatoria(b): ");
	scanf("%i",&b);
	for(x=a; x<=b; x++){
	    if(x<=1){
	    	fx=-(pow(x,2)+10*x)/25;
		}
		if(x>1&&x<=5){
			fx=(pow(x,2)+3*x)/(x-1);
		}
		if(x > 5){
			fx=(pow(x,3)-5*x)/(x-5);
		}	
		printf("El resultado de la sumatoria de x(%i) es: %f",x,fx);
	}
}
