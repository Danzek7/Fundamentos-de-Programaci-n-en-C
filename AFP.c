#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
	typedef struct Afp{
		int	 codAfp;
		char nomAfp[10]; 
	}Afp;
	typedef struct Cotizante{
		int  codigo;
		int	 codAfp;
		char tipoCotiz[2];	
		int	 fondo;			
		int  region;	
	}Cotizante;
	Afp	afp[6]={{1033,"CAPITAL"},{1003,"CUPRUM"},{1005,"HABITAT"},{1032,"PLANVITAL"},{1008,"PROVIDA"},{1031,"MODELO"}};
	Cotizante cotiz[5000]={{10,1031,"D",10000000,5},{20,1003,"I",30000000,8},{30,1003,"D",25000000,5},{40,1003,"I",13000000,5},{50,1005,"D",17000000,3},{60,1033,"D",8000000,5}};
	int reg;
	int cantCotiz;
	int fondo;
	int i;
	int j;
	char nombre[10];
	do{
		printf("Ingrese la region a evaluar: ");
		scanf("%i",&reg);
	}while((reg<1 )||(reg>15));
	cantCotiz=0;
	for(i=0;i<6;i++){
		if((cotiz[i].region==reg) && (cotiz[i].fondo<20000000)){
			cantCotiz++;
		}
	}
	printf("\nLa cantidad de cotizantes en la region %i es: %i",reg,cantCotiz);
	for(i=0;i<6;i++){
		if(!strcmp(cotiz[i].tipoCotiz,"I")){
			for(j=0;j<6;j++){
				if(afp[j].codAfp==cotiz[i].codAfp){
					strcpy(nombre,afp[j].nomAfp);
				}
			}
			printf("\nRegion: %i - AFP: %s - Fondo: %i",cotiz[i].region,nombre,cotiz[i].fondo);
		}
	}	
}
