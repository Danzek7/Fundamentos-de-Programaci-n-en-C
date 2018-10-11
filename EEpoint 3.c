#include <stdio.h>
#include <string.h>

void edadPromedio(int[][2], int, float[]);	
int masPracticados(int[][2], int, char[][10], char[][10]);	

void main()
{
	int   socio[100][2]; //Cantidad m?xima de socios: 100
	char  deporte[10][10]={"Rugby","Tenis","Voley","Basquet","Futbol","Natacion","Atletismo","Paton","Judo","Lucha"};   
	char  mas[10][10]; 
	float prom[10];
	int   cant;
	int   i;
	int   cantMas;
	
	do
	{
		printf("Ingrese la cantidad de socios a registrar: ");
		scanf("%i",&cant);
	}while(cant <= 0 || cant > 100);
	
	//Registro de socios	
	for(i=0; i<cant; i++)
	{
		do
		{
			printf("Ingrese la edad del socio %i: ",i+1);
			scanf("%i",&socio[i][0]);
		}while(socio[i][0] <= 0 ||socio[i][0] > 100); //Extremos referenciales
			
		do
		{
			printf("Ingrese el tipo de deporte practicado por el socio %i: ",i+1);
			scanf("%i",&socio[i][1]);
		}while(socio[i][1] <= 0 || socio[i][1] > 10); 
	}
		
	//C?lculo edad promedio	por deporte	
	edadPromedio(socio, cant, prom);	
	
	for(i=0; i<10; i++)
		printf("\nLa edad promedio en %s es: %3.2f",deporte[i],prom[i]);
	
	//Los deportes m?s practicados por los socios
	printf("\n\nLos deportes mas practicados por los socios son:");
		
	cantMas=masPracticados(socio, cant, deporte, mas);	

	for(i=0; i<cantMas; i++)
		printf("\nDeporte: %s",mas[i]);
}


void edadPromedio(int socio[][2], int cant, float prom[])	
{
	int   i;
	int   j;
	int   suma;	
	int   prac; 

	for(i=0; i<10; i++)
	{
		suma=0;
		prac=0;
		for(j=0; j<cant; j++)
		{
			if(socio[j][1] == i+1)
			{
				suma=suma + socio[j][0];
				prac=prac + 1;
			}		
		}
		
		if(prac==0)
			prom[i]=0;	//En caso de que ning?n socio practique el i-esimo deporte.
		else
			prom[i]=suma/prac;			
	}
}			


int masPracticados(int socio[][2], int cant, char dep[][10],char mas[][10])
{
	int prac[10];
	int i;
	int j;
	int max;

	int cont;

	for(i=0; i<10; i++)
	{
		prac[i]=0;
		for(j=0; j<cant; j++)
		{
			if(socio[j][1] == i+1)
				prac[i]=prac[i] + 1;		
		}
		
	}
	
	max=prac[0];
	for(i=1; i<10; i++)
	{
		if(prac[i]>max)
			max=prac[i];
	}
			
	cont=0;	
	for(i=0; i<10; i++)
	{
		if(prac[i]==max)
		{
			strcpy(mas[cont],dep[i]);
			cont ++;
		}
	}
	
	return cont;			
}		
