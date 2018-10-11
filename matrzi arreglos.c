#include <stdio.h>
void main()
{
	int i;
	int j;
	int m[6][6];
	int vecinos;
	int diagonal;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Ingrese la m(%i,%i): ",i,j);
			scanf("%i",&m[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %i ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("\nm(%i,%i): %i",i,i,m[i][i]);
	}
	printf("\n");
    for(j=0;j<3;j++){
    	printf("\nm(2,%i): %i",j,m[2][j]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("\nm(%i,1): %i",i,m[i][1]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==2){
				printf("\nm(%i,%i): %i",i,j,m[i][j]);
			}
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("\nm(%i,%i): %i",i,2-i,m[i][2-i]);
	}
	printf("\n");
	//El caso superior izquierdo:
	for(i=0;i<2;i++){
		for(j=0;j<2-i;j++){ //1=2-1
			printf("\nm(%i,%i): %i",i,j,m[i][j]);
		}
	}
	/////////////////////////////////
	printf("\n");
	for(i=1;i<3;i++){
		for(j=1;j<3;j++){
			if(i+j>2){
				printf("\nm(%i,%i): %i",i,j,m[i][j]);
			}
		}
	}
	printf("\n");
	for(i=1;i<3;i++){
		for(j=3-i;j<3;j++){
			printf("\nm(%i,%i): %i",i,j,m[i][j]);
		}
	}
	////////////////////////////////////
	vecinos=1;
	diagonal=1;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j&&m[i][j]==0){
			    diagonal=0;	
			}
			if(i!=j&&m[i][j]!=0){
				vecinos=0;
			}
		}
	}
	if(diagonal==1&&vecinos==1){
		printf("\nLa matriz es una matriz diagonal");
	}else
	    printf("\nLa matriz no es una matriz diagonal");
}
