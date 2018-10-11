#include <stdio.h>
#include <string.h>
#include <math.h>
void main(){
	typedef struct Componente{
		int codigo;
		char nombre[15];
	}Componente;
	typedef struct Residuo{
		int codigo; 
		float pesoHumedo;
		float pesoSeco;
	}Residuo;
	Componente com[6];
	Residuo res[6];
	int mayor;
	char ComMayor[15];
	int prom;
	char comp[15];
	int i;
	for(i=0;i<6;i++){
		do{
			printf("\nIngrese el codigo del componente %i: ",i+1);
		    scanf("%i",&res[i].codigo);
		}while(res[i].codigo%10!=0);
		printf(" -Ingrese su valor de peso humedo (ton): ");
		scanf("%f",&res[i].pesoHumedo);
	    printf(" -Ingrese su valor de peso seco (ton): ");
		scanf("%f",&res[i].pesoSeco);
	}
	for(i=0;i<6;i++){
		do{
			printf("\nIngrese el codigo del componente %i: ",i+1);
		    scanf("%i",&com[i].codigo);
		}while(com[i].codigo%10!=0);
		printf(" -¿Que componente es?: ");
		scanf("%s",&com[i].nombre);
	}
	printf("\n-------");
	printf("\n¿Que componente quiere evaluar?: ");
	scanf("%s",&comp);
	for(i=0;i<6;i++){
		if(!strcmp(comp,com[i].nombre)){
			if(res[i].codigo==com[i].codigo){
				printf("\nEL promedio de peso seco para %s es: %i",comp,res[i].pesoSeco*7);
			}
		}
	}
	mayor=0;
	int suma[6];
	for(i=0;i<6;i++){
		suma[i]=0;
		suma[i]=suma[i]+res[i].pesoSeco+res[i].pesoHumedo;
	}
	for(i=0;i<6;i++){
		if(res[i].codigo==com[i].codigo){
			if(mayor<suma[i]){
			    mayor=suma[i];
			    strcpy(ComMayor,com[i].nombre);
		    }
		}
	}
	printf("\n---------");
	printf("\nEl componente que esta en mayor proporcion es: %s",ComMayor);
	float por[6];
	int total;
	total=0;
	for(i=0;i<6;i++){
		total=total+suma[i];
	}
	printf("\n---------");
	for(i=0;i<6;i++){
		por[i]=0;
		por[i]=por[i]+(suma[i]*100/total);
		printf("\nEl porcentaje del componente %s es: %f[por]",com[i].nombre,por[i]);
	}
}
