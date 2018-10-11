#include <stdio.h>
void main()
{
	typedef struct Maquina
	{
		int nroMaquina;
		char patente[6];
		int agno; //año
		int estado;
	}Bus;
	
	Bus flota[9]; //flota de 9 buses
	
	int i;
	//Ingresa de los datos de las máquinas de la flota
	for(i=0;i<1;i++){
		printf("Ingrese el numero de las maquina %i: "i+1);
		scanf("%i",&flota[i].nroMaquina);
		printf("\nIngrese la patente de la maquina %i: "i+1);
		scanf("%s",&flota[i].patente);
		printf("\nIngrese el agno de la maquina %i: "i+1);
		scanf("%i",&flota[i].agno);
		do{
			printf("\nIngrese el estado de la maquina: ");
			scanf("%i",&flota[i].estado);
		}while(flota[i].estado<1||flota[i].estado>2);
	}
	printf("\nMaquina: %i",flota[0].nroMaquina);
	printf("\nPatente: %s",flota[0].patente);
	printf("\nAño: %i",flota[0].agno);
	if(flota[0].estado==1){
		printf("\nMaquina en servicio");
	}else
	    printf("\nMaquina en mantenimiento");
    while(flota[i].nroMaquina<0){
    	
	}
}
