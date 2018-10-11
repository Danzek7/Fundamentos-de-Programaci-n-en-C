#include <stdio.h>
#include <string.h>
void main()
{
	typedef struct Bus
	{
		int nroMaquina;
		char patente[6];
		int asientos[45]; //Un campo de la estructura corresponde a un vector
	}Bus1;
	
	Bus1 b1;
	
	int i;
	printf("\nIngrese el numero de la maquina: ");
	scanf("%i",&b1.nroMaquina);
	printf("\nIngrese la patente de la maquina: ");
	scanf("%s",&b1.patente);
	for(i=0;i<45;i++){
		b1.asientos[i]=0;
	}
	printf("\nMaquina: %i",b1.nroMaquina);
	printf("\nPatente: %s",b1.patente);
	if(b1.asientos[1]==0){
		printf("\nAsiento 2: Disponible");
	}else
	    printf("\nAsiento 2: no disponible");
}
