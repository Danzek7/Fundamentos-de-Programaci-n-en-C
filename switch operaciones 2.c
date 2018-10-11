#include <stdio.h>
#include <math.h>
float rest(int a, int b, int op);
void main(){
	int a;
	int b;
	int op;
	printf("Ingrese el primer valor de la operacion: ");
	scanf("%i",&a);
	printf("\nIngrese el segundo valor de la operacion: ");
	scanf("%i",&b);
	printf("\nIngrese la operacion a realizar (1.sumar, 2.restar, 3.multiplicar, 4.dividir)");
	scanf("%i",&op);
	rest(a,b,op);
}
float rest(int a, int b, int op){
	float result;
	switch(op){
		case 1:
			result=a+b;
			printf("%f",result);
			break;
		case 2:
			result=a-b;
			printf("%f",result);
			break;
		case 3:
			result=a*b;
			printf("%f",result);
			break;
		case 4:
			result=a/b;
			printf("%f",result);
			break;
		default:
			printf("\nerror");
			break;
	}
}
