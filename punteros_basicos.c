#include <stdio.h>
void main(){
	int num=50;
	printf("Valor de la variable:\n");
	printf("Dato: %i",num);//dato
	printf("\nPosicion: %p",&num);//posición en memoria
	int *p_num;
	p_num=&num;//&núm= posición de memoria de "num"
	printf("\n\nDato: %i",*p_num);
	printf("\nPosicion: %p",p_num);
}
