#include <stdio.h>
int buscar(int arregloCY[], int tamanio, int numero);
void mostrar(int arreglo[], int tamanio);
void main(){
	int i;
	int num;
	int indice;
	int a[5];
	for(i=0;i<5;i++){
		printf("\nIngrese el valor a[%i]: ",i);
		scanf("%i",&a[i]);
	}
	mostrar(a,5);
	printf("\n¿Que numero se quiere buscar? ");
	scanf("%i",&num);
	indice=buscar(a,5,num);
	if (indice!=-1){
         printf("El número %d esta en la posicion %d \n",num, indice);
    }else{
         printf("El numero %d no se encontro en el arreglo\n",num);
    }
}
int buscar(int arregloCY[], int tamanio, int numero){
    int i;
    int pos=-1;

    for(i=0;i<tamanio;i++){
        if (arregloCY[i]==numero){
           pos=i;
       }
    }
    return pos;
}
void mostrar(int arreglo[], int tamanio){
	int i;
	printf("\n");
	for(i=0;i<tamanio;i++){
		printf(" %i ",arreglo[i]);
	}
}
