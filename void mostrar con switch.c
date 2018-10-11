#include <stdio.h>
int mostrar();
void main(){
	int a=3;
	a=mostrar(a);
	printf(" %i",a);
}
int mostrar(int a){
	printf(" Hola");
	a++;
	printf(" %i",a);
	return a;
}
