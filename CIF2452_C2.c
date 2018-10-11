#include <stdio.h>
#include <math.h>
void main()
{
	int i;
	int j;
	int k;
	int f;
	int menor;
	int M[4][4]={{50,23,4,6},{12,70,15,9},{1,1,50,15},{80,90,85,87}};
	int D[4][1]={{200},{70},{350},{43}};
	int O[4][1]={{283},{176},{417},{385}};
	float T[4][4];
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" %i ",M[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		j=0;
		printf(" %i ",D[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		j=0;
		printf(" %i ",O[i][j]);
		printf("\n");
	}
    printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			T[i][j]=(M[i][j]/O[i][0]);
			printf(" %f ",T[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	menor=M[0][1];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==1||j==1){
				if(M[i][j]<menor){
					menor=M[i][j];
					k=i;
					f=j;
				}
			}
		}
	}
	printf("\nLa menor cantidad de transacciones en agricultura se registraron en M[%i,%i] en el sector de turismo",k,f);
}
