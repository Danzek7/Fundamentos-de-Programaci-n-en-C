#include <stdio.h>
#include <math.h>
int mostrar(int sport[],int tamanio);
void muestre(int depor[],int age[],int tam);
void main(){
	//ALumnos: Daniel Fernández / José Riquelme
	int i;
	int socio;
	do{
		printf("Ingrese la cantidad de socios: ");
		scanf("%i",&socio);
	}while(socio<0);
	int edad[socio];
	int deporte[socio];
	printf("\nDeportes disponibles: 1.rugby, 2.tenis, 3.voley, 4.basquet, 5.futbol, 6.natacion, 7.atletismo, 8.patin, 9.judo, 10.lucha\n");
	for(i=0;i<socio;i++){
		do{
			printf("\nIngrese la edad del socio %i: ",i);
		    scanf("%i",&edad[i]);
		}while((edad[i]<1)&&(edad[i]>99));
		do{
			printf("\nDeporte que realiza el socio %i: ",i);
			scanf("%i",&deporte[i]);
		}while((deporte[i]<1)&&(deporte[i]>10));
	}
	int indice=mostrar(deporte,socio);
    muestre(deporte,edad,socio);
	if(indice==1){
		printf("\nEl deporte mas practicado es el rugby");
	}
	if(indice==2){
		printf("\nEl deporte mas practicado es el tenis");
	}
	if(indice==3){
		printf("\nEl deporte mas practicado es el voley");
	}
	if(indice==4){
		printf("\nEl deporte mas practicado es el basquet");
	}
	if(indice==5){
		printf("\nEl deporte mas practicado es el futbol");
	}
	if(indice==6){
		printf("\nEl deporte mas practicado es la natacion");
	}
	if(indice==7){
		printf("\nEl deporte mas practicado es el atletismo");
	}
	if(indice==8){
		printf("\nEl deporte mas practicado es el patin");
	}
	if(indice==9){
		printf("\nEl deporte mas practicado es el judo");
	}
	if(indice==10){
		printf("\nEl deporte mas practicado es la lucha");
	}
}
void muestre(int depor[],int age[],int tam){
	int i;
	int j;
	int z;
	int anio[100];
	int cont[100];
	float prom[100];
	int prom1;
	int prom2;
	int prom3;
	int prom4;
	int prom5;
	int prom6;
	int prom7;
	int prom8;
	int prom9;
	int prom10;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			anio[z]=0;
			cont[z]=0;
			prom[z]=0;
			if(depor[i]==1){
				z=0;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
				prom1=prom[z];
			}
			if(depor[i]==2){
				z=1;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==3){
				z=2;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==4){
				z=3;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==5){
				z=4;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==6){
				z=5;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==7){
				z=6;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==8){
				z=7;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==9){
				z=8;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
			if(depor[i]==10){
				z=9;
				anio[z]=age[j]+anio[z];
				cont[z]=cont[z]+1;
				prom[z]=anio[z]/cont[z];
			}
		}
	}
	printf("\nEL promedio de edades de socios en rugby es: %f",prom1);
	printf("\nEL promedio de edades de socios en tenis es: %f",prom[1]);
	printf("\nEL promedio de edades de socios en voley es: %f",prom[2]);
	printf("\nEL promedio de edades de socios en basquet es: %f",prom[3]);
	printf("\nEL promedio de edades de socios en futbol es: %f",prom[4]);
	printf("\nEL promedio de edades de socios en natacion es: %f",prom[5]);
	printf("\nEL promedio de edades de socios en atletismo es: %f",prom[6]);
	printf("\nEL promedio de edades de socios en patin es: %f",prom[7]);
	printf("\nEL promedio de edades de socios en judo es: %f",prom[8]);
	printf("\nEL promedio de edades de socios en lucha es: %f",prom[9]);
}
int mostrar(int sport[],int tamanio){
	int i;
	int suma1=0;
	int suma2=0;
	int suma3=0;
	int suma4=0;
	int suma5=0;
	int suma6=0;
	int suma7=0;
	int suma8=0;
	int suma9=0;
	int suma10=0;
	int mayor=0;
	for(i=0;i<tamanio;i++){
	    if(sport[i]==1){
	   		suma1=suma1+1;
	   		if(suma1>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==2){
			suma2=suma2+1;
			if(suma2>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==3){
	    	suma3=suma3+1;
	    	if(suma3>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==4){
			suma4=suma4+1;
			if(suma4>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==5){
	    	suma5=suma5+1;
	    	if(suma5>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==6){
			suma6=suma6+1;
			if(suma6>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==7){
	    	suma7=suma7+1;
	    	if(suma7>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==8){
			suma8=suma8+1;
			if(suma8>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==9){
	    	suma9=suma9+1;
	    	if(suma9>mayor){
				mayor=sport[i];
			}
		}
		if(sport[i]==10){
			suma10=suma10+1;
			if(suma10>mayor){
				mayor=sport[i];
			}
		}
	}
	return mayor;
}
