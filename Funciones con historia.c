#include <stdio.h>
void main(){
	char nombre[20];
	char apellido[20];
	char lugar[20];
	printf("Escriba el nombre del protagonista: ");
	scanf("%s",&nombre[20]);
	printf("\nEscriba el apellido del protagonista: ");
	scanf("%s",&apellido[20]);
	printf("\nEscriba el lugar de los acontecimientos: ");
	scanf("%s",&lugar[20]);
	mostrar(nombre,apellido,lugar);
}
void mostrar(char name[20], char lastname[20], char place[20]){
	printf("\Nuestro protagonista %s de apellido %s comienza su aventura en: %s",name,lastname,place);
}

