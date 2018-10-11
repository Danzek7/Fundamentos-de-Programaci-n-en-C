#include <stdio.h>
#include <math.h>
void main(){
	int n1;
	int n2; /////DEFICIENTE, PERFECTO O ABUNDANTE
	int def1;
	int def2;
	do{
		printf("Ingrese el primer numero: ");
	    scanf("%i",&n1);
	}while(n1<=0);
	do{
		printf("Ingrese el segundo numero: ");
	    scanf("%i",&n2);
	}while(n2<=0);
	def1=numDeficiente(n1);
	def2=numDeficiente(n2);
	if(n1>def1){
		printf("\nEl numero %i es un numero deficiente",n1);
    }
	if(n2>def2){
		printf("\nEl numero %i es un numero deficiente",n2);
	}
}
int numDeficiente(int n){
	int i;
	int sum;
	int dv;
	sum=0;
	for(i=0;i<n;i++){
		if(n%i==0){
		   dv=n%i;
		   sum=sum+dv; 	
		}
	}
	return sum;
}

