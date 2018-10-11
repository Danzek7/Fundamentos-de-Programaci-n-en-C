#include <stdio.h>
void main()
{
	int n1;
	int n2;
	int i;
	int sum1;
	int sum2;
	do{
		printf("Ingrese el primer numero: ");
	    scanf("%i",&n1);
	}while(n1<=0);
	do{
		printf("Ingrese el segundo numero: ");
	    scanf("%i",&n2);
	}while(n2<=0);
	sum1=0;
	sum2=0;
	for(i=1;i<n1;i++){ //i=divisor.
		if(n1%i==0){
			sum1=sum1+i;
		}
	}
	for(i=1;i<n2;i++){
		if(n2%i==0){
			sum2=sum2+i;
		}
	}
	if(n1==sum2&&n2==sum1){
		printf("Los numeros %i y %i son numeros amigos",n1,n2);
	}else
	    printf("Los numeros %i y %i no son numeros amigos",n1,n2);
}
