#include <stdio.h>
#include <math.h>
void mostrar(int res[5],int ope);
void main(){
	int nota[5];
	int op;
	int i;
	for(i=0;i<5;i++){
		printf("\nIngrese la nota del alumno %i: ",i+1);
		scanf("%i",&nota[i]);
	}
	do{
		printf("\n¿Que operacion quiere realizar?: ");
		scanf("%i",&op);
	}while((op<1)&&(op>4));
	mostrar(nota,op);
}
void mostrar(int res[5],int ope){
	int i;
	float prom=0;
	int mayor=0;
	int menor=0;
	int k;
	int s;
	switch(ope){
		case 1:
			for(i=0;i<5;i++){
				printf("\nNota de estudiante %i: %i",i+1,res[i]);
			}
		    break;
		case 2:
		    for(i=0;i<5;i++){
				prom=(res[i]+prom)/i;
			}
			printf("\nLa media total del curso es: %f",prom);
			break;
		case 3:
			for(i=0;i<5;i++){
				if(mayor<=res[i]){
					mayor=res[i];
					k=i;
				}
			}
			printf("\nEl estudiante %i es el que tiene el mayor puntaje con: %i",k,mayor);
			break;
		case 4:
			for(i=0;i<5;i++){
				if(menor>=res[i]){
					menor=res[i];
					s=i;
				}
			}
			printf("\nEl estudiante %i es el que tiene el menor puntaje con: %i",s,menor);
			break;
	}
}
