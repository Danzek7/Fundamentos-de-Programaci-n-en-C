#include <stdio.h>
void main(){
	int num=50;
	printf("Valor de la variable:\n");
	printf("Dato: %i",num);//dato
	printf("\nPosicion: %p",&num);//posici�n en memoria
	int *p_num;
	p_num=&num;//&n�m= posici�n de memoria de "num"
	printf("\n\nDato: %i",*p_num);
	printf("\nPosicion: %p",p_num);
}
