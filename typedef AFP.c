#include <stdio.h>
#include <string.h>
void main()
{
	//para la afp CUPRUM, informar cuántos afiliados tiene en la región.
	//para cada tipo de cotizante (D o I), informe el monto total del cotizante.
	typedef struct afp
	{
		int codAFP;
		char nomAFP[10];
	}Afp;
	typedef struct Cotizante
	{
		int codigo;
		int codAFP;
		char tipoCotiz[2];
		int fondo;
		int region;
	}Cotizante;
	Afp afp[5];
	Cotizante cotiz[5000];
	int encontrada;
	int cont;
	int cod;
	cont=0;
	//strcmp devuelve 0 si son iguales, y 1 si son distintos
	do{
		if(!strcmp(afp[cont].nomAfp,"CUPRUM")){
			encontrada=1;
			cod=afp[cont.codAfp]; //*
		}else
		    cont++;
	}while(encontrada==0||cont==5);
}
