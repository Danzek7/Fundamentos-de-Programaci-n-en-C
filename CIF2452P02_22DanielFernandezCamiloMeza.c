#include <stdio.h>
void main()
{
	typedef struct Afp{
		int codAFP;
		char nomAfp[10];
	}Afp;
	typedef struct Cotizante{
		int codigo;
		int codAfp;
		char tipoCotiz[2];
		int fondo;
		int region;
	}Cotizante;
	Afp afp[5]={{1033,"CAPITAL"},{1003,"CUPRUM"},{1005,"HABITAT"},{1032,"PLANVITAL"},{1008,"PROVIDA"},{1031,"MODELO"}};
	Cotizante cotiz[5000]={{10,1031,"D",10000000,5},{20,1003,"I",30000000,8},{30,1003,"D",25000000,5},{40,1003,"I",13000000,5},{50,1005,"D",17000000,3},{60,1033,"D",8000000,5}};
	int i;
	int reg;
	do{
		printf("Ingrese la region que quiere evaluar: ");
	    scanf("%i",&reg);
	}while(reg!=3&&reg!=5&&reg!=8);
    for(i=0;i<6;i++){
    	if(i==3&&i==reg){
    		if(strcmp(reg==cotiz.region));
    		   
		}
    	if(i==5&&i==reg){
    		if(strcmp(reg==cotiz.region));
    		printf("%i",cotiz[i]);
    	}
		}
		if(i==8&&i==reg){
			if(strcmp(reg==cotiz.region));
    		printf("%i",cotiz[i]);
    	}
		}
	}
}
