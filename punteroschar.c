//Imprimir el alfabeto completo con mayúsculas
#include <stdio.h>
void main(){
	char letra='A';
	char *p_letra=&letra;
	printf("%c",*p_letra);
	
}
