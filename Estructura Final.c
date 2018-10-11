#include <stdio.h>
#include <math.h>
#include <string.h>
void main(){
	typedef struct Jugadores{
		char nombre[20];
		int edad;
		float altura;
	}Jugador;
	int i;
	int op;
	float mayorH=0;
	int k;
	char nom[20];
	Jugador per[5];
	for(i=0;i<5;i++){
		printf("\nJugador %i: ",i+1);
		scanf("%s",&per[i].nombre[20]);
		printf(" - Edad: ");
		scanf("%i",&per[i].edad);
		printf(" - Altura: ");
		scanf("%f",&per[i].altura);
	}
	do{
		printf("\n¿Que operacion quiere realizar? \n(1.listar nombre, 2.listar altura, 3.listar edad, 4.Examinar un jugador, 5.edad y nombre del mas alto): \n");
		scanf("%i",&op);
	}while((op<0)||(op>5));
	switch(op){
		case 1:
			for(i=0;i<5;i++){
				printf("\nNombre Jugador %i: %s",i+1,per[i].nombre[20]);
			}
			break;
		case 2:
			for(i=0;i<5;i++){
				printf("\nAltura Jugador %i: %f",i+1,per[i].altura);
			}
			break;
		case 3:
			for(i=0;i<5;i++){
				printf("\nEdad Jugador %i: %i",i+1,per[i].edad);
			}
			break;
		case 4:
			printf("\nNombre del jugador a evaluar: ");
			scanf("%s",&nom[20]);
			for(i=0;i<5;i++){
				if(!strcmp(nom,per[i].nombre)){
					printf("\nAltura Jugador %i: %f",i,per[i].altura);
					printf("\nEdad Jugador %i: %i",i,per[i].edad);
			    }
		    }
			break;
		case 5:
            for(i=0;i<5;i++){
            	if(mayorH<per[i].altura){
            		mayorH=per[i].altura;
            		k=i;
				}
			}
			printf("\nNombre del jugador mas alto: %i",per[k].nombre);
			printf(" - Edad: %i",per[k].edad);
			break;
	}
}
