#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i;
	int j;
	int matriz[3][4]={{0,1,2,3},{1,2,3,4},{2,3,4,5}};
	int matriz2[3][4]={{0,1,2,3},{1,2,3,4},{2,3,4,5}};
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf(" %i ",matriz[i][j]);
		}
	    printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf(" %i ",matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("suma: ");
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf(" %i ",matriz[i][j]+matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("resta: ");
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf(" %i ",matriz[i][j]-matriz2[i][j]);
		}
		printf("\n");
	}
}
