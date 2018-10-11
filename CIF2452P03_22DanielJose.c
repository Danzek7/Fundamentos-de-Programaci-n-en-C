#include <stdio.h>
void mostrarLinea(int tri[10][10],int nu);
void main(){
	//alumnos: Daniel Fernández / José Riquelme
	int i;
	int j;
	int n;
	int t[6][6];
	i=0;
	j=0;
	int cont;
	cont=0;
	do{
		do{
			if(i<=j){
			    t[i][j]=cont+1;
				cont=cont+1;	
			}else{
				t[i][j]=0;
			}
		    j=j+1;
		}while(j<5);
		j=0;
		i=i+1;
	}while(i<5);
	do{
		printf("\nIngrese la n-esima linea a evaluar: ");
		scanf("%i",&n);
	}while((n<0)&&(n>5));
	mostarLinea(t,n);
}
void mostrarLinea(int tri[10][10],int nu){
	int i;
	int j;
	j=0;
	printf("\n");
	do{
		printf(" %i ",tri[nu][j]);
		j=j+1;
	}while(j<=5);
}
