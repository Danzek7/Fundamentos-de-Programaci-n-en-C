#include <stdio.h>
void mostrar1(int nu,int vr[]);
int mostrar2(int vr[],int nu);
int mostrar3(int vr[],int nu);
void main(){
	int i;
	int n;
	do{
		printf("Ingrese el tamanio del arreglo: ");
		scanf("%i",&n);
	}while(n<0);
	int v[n];
	for(i=0;i<n;i++){
		printf("\nIngrese el valor del v[%i]: ",i);
		scanf("%i",&v[i]);
	}
	mostrar1(n,v);
	int indice1=mostrar2(v,n);
	int indice2=mostrar3(v,n);
	if((indice1!=1)||(indice2!=1)){
		printf("\nEL arreglo no es un monte");
	}else{
		printf("\nEl arreglo es un monte");
	}
}
void mostrar1(int nu,int vr[]){
	int i;
	int j;
	if(nu<=1){
		printf("\El arreglo es un monte");
	}else{
		printf("\nEl arreglo no esta vacio");
	}
}
int mostrar2(int vr[],int nu){
	int mitad;
	int ascendente=1;
	int i;
	if(nu%2==0){
		mitad=(nu/2)-1;
		if(mitad>0){
			for(i=0;i<mitad;i++){
				if(vr[i+1]<vr[i]){
					ascendente=0;
				}
			}
		}
	}else{
		mitad=nu/2;
		for(i=0;i<mitad-1;i++){
			if(vr[i+1]<vr[i]){
				ascendente=0;
			}
		}
	}
	return ascendente;
}
int mostrar3(int vr[],int nu){
	int mitad;
	int capicua=1;
	int i;
	if(nu%2==0){
		mitad=(nu/2)-1;
		for(i=0;i<=mitad;i++){
			if(vr[i]!=vr[nu-1-i]){
				capicua=0;
			}
		}
	}else{
		mitad=nu/2;
		for(i=0;i<mitad;i++){
			if(vr[i]!=vr[nu-1-i]){
				capicua=0;
			}
		}
	}
	return capicua;
}
