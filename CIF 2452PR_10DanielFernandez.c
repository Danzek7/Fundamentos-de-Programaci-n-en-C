#include <stdio.h>
#include <math.h>
void mostrarLista(int n, int l[]);
void obtenerSublista(int xe, int nu, int l[]);
void realizarIntercambio(int nu, int l[]);
void main(){
	int n;
	do{
		printf("\nIngrese el tamanio del arreglo: ");
		scanf("%i",&n);
	}while(n<0);
	int L[n];
	int i;
	int x;
	for(i=0;i<n;i++){
		printf("\nIngrese el dato L[%i]: ",i);
		scanf("%i",&L[i]);
	}
	do{
		printf("\nIngrese un valor x: ");
		scanf("%i",&x);
	}while((x<0)&&(x>n));
	mostrarLista(n,L);
	obtenerSublista(x,n,L);
	realizarIntercambio(n,L);
}
void mostrarLista(int nu, int l[]){
	int i;
	printf("\n");
	for(i=0;i<nu;i++){
		printf(" %i ",l[i]);
	}
}
void obtenerSublista(int xe, int nu, int l[]){
	int i;
	int mitad;
	mitad=0;
	printf("\n");
	if(nu%2==0){
		mitad=(nu/2)-1;
		for(i=xe-1;i<mitad;i++){
			printf(" %i ",l[i]);
		}
		for(i=mitad+1;i<nu-xe;i++){
			printf(" %i ",l[i]);
		}
	}
}
void realizarIntercambio(int nu, int l[]){
	int i;
	float mitad;
	mitad=0;
	printf("\n");
	if(nu%2!=0){
		mitad=trunc(nu/2);
		for(i=nu;i>=mitad+1;i--){
			printf(" %i ",l[i]);
		}
		for(i=mitad;i>=0;i--){ 
			printf(" %i ",l[i]);
		}
	}
}
