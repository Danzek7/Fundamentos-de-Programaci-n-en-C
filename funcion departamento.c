#include <stdio.h>
void mostrar(int habs[6][4]);
void main(){
	int i;
	int j;
	int hab[6][4];
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			do{
				printf("\nIngrese la cantidad de habitantes en la habitacion %i del piso %i: ",j,i);
				scanf("%i",&hab[i][j]);
			}while((hab[i][j]<0)&&(hab[i][j]>10));
		}
	}
	mostrar(hab);
}
void mostrar(int habs[6][4]){
	int i;
	int j;
	int mayor=0;
	int k;
	int s;
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			if(mayor<=habs[i][j]){
				mayor=habs[i][j];
				k=i;
				s=j;
			}
		}
	}
	printf("\nLa habitacion %i en el piso %i es la que tiene mas habitantes.",s,k);
}
