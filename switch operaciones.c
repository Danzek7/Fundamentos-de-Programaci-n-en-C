#include <stdio.h>
#include <math.h>
void main()
{
	int a;
	int b;
	int operacion;
	int suma;
	int resta;
	int multiplicacion;
	int division;
	
	printf("\nIngrese el primer valor de la operacion: ");
	scanf("%i",&a);
	printf("\nIngrese el segundo valor de la operacion: ");
	scanf("%i",&b);
	
	suma=a+b;
	resta=a-b;
	multiplicacion=a*b;
	division=a/b;
	
    do
    {
    	printf("\nIngrese operacion que quiere realizar con los numeros (1.sumar, 2.restar, 3.multiplicar, 4.dividir): ");
        scanf("%i",&operacion);
	}while(operacion<0&&operacion>5);
	
	switch(operacion)
	{
		case 1:
			printf("El resultado de la suma es: %i",suma);
			break;
		case 2:
		    printf("El resultado de la resta es: %i",resta);
		    break;
		case 3:
			printf("El resultado de la multiplicación es: %i",multiplicacion);
			break;
		case 4:
		    printf("El resultado de la división es: %i",division);
			break;
		default:
		    printf("error");
			break;	
	}
}
