#include <stdio.h>
#include <math.h>
void main(){
	int n1;
	int n2;
	int sum1; 
	int sum2;
	int narc1;
	int narc2;
	int perf1;
	int perf2;
	int ab1;
	int ab2;
	do{
		printf("Ingrese el primer numero: ");
	    scanf("%i",&n1);
	}while(n1<=0);
	do{
		printf("Ingrese el segundo numero: ");
	    scanf("%i",&n2);
	}while(n2<=0);
	sum1=sumaDivisores(n1);
	sum2=sumaDivisores(n2);
	narc1=numNarcicista(n1);
	narc2=numNarcicista(n2);
	perf1=numPerfecto(n1);
	perf2=numPerfecto(n2);
	ab1=numAbundante(n1);
	ab2=numAbundante(n2);
	if(n1==sum2&&n2==sum1){
		printf("Los numeros %i y %i son numeros amigos",n1,n2);
	}else
	    printf("Los numeros %i y %i NO son numeros amigos",n1,n2);
	if(n1==narc1){
		printf("\nEl numero %i es un Numero Narcicista",n1);
	}
	if(n2==narc2){
		printf("\nEl numero %i es un Numero Narcicista",n2);
	}
	if(n1==perf1){
		printf("\nEl numero %i es un Numero Perfecto",n1);
	}
	if(n2==perf2){
		printf("\nEl numero %i es un Numero Perfecto",n2);
	}
	if(2*n1<ab1){
		printf("\nEl numero %i es un Numero Abundante",n1);
	}
	if(2*n2<ab2){
		printf("\nEl numero %i es un Numero Abundante",n2);
	}
	if(2*n1>ab1){
		printf("\nEl numero %i es un Numero Deficiente",n1);
	}
	if(2*n2>ab2){
		printf("\nEl numero %i es un Numero Deficiente",n2);
	}
}
int sumaDivisores(int n){
    int divisor;
    int suma;
    suma=0;
    for(divisor=1;divisor<=n/2;divisor++){
    	if(n%divisor==0){
    		suma=suma+divisor;
		}
	}
	return suma;
}
int numNarcicista(int n){
	int narcicista;
	int d;
	int c;
	int m;
	m=n;
	c=0;
	do{
		d=m%10;
		c=c+1;
		m=m/10;
	}while(m!=0);
	narcicista=0;
	do{
		narcicista=pow(n%10,c)+narcicista;
	    n=n/10;
	}while(n!=0);
	return narcicista;
}
int numPerfecto(int n){
	int i;
	int div;
	int suma;
	i=n;
	do{
		div=n/i;
		if(n%i==0){
			suma=suma+div;
		}
		i=i-1;
		div=0;
	}while(i!=1);
	return suma-1;
}
int numAbundante(int n){
	int i;
	int sum;
	i=n;
	sum=0;
	do{
		if(n%i==0){
			sum=sum+i;
		}
		i=i-1;
	}while(i!=0);
	return sum;
}
