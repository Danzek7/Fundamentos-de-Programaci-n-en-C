#include <stdio.h>
int mostrar();
void main(){
	char estado[10];
	printf("¿Como estas?: \n");
	scanf("%s",&estado);
	mostrar(estado);
}
int mostrar(char stas){
	if(!strcmp(stas,"bien")){
		printf("\nExcelente");
	}
	if(!strcmp(stas,"mal")){
		printf("\nMuy mal");
	}
}
