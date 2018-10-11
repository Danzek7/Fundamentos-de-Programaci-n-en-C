#include <stdio.h>
void main()
{
	float M[3][3]={{5,0.4,0.2},{4,0.3,0.1},{3.5,0.5,0.2}};
	int P[3][3];
	float G1[3][3];
	float G2[3][3];
	float G3[3][3];
	float G[3][3];
	float suma;
	float prom1;
	float prom2;
	float prom3;
	float menor;
	int i;
	int j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %f ",M[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
				printf("\nIngrese la cantidad de H para P[0][%i]: ",j);
				scanf("\n%i",&P[i][j]);
			}
			if(i==1){
				printf("\nIngrese la cantidad de N para P[1][%i]: ",j);
				scanf("\n%i",&P[i][j]);
			}
			if(i==2){
				printf("\nIngrese la cantidad de C para P[2][%i]: ",j);
				scanf("\n%i",&P[i][j]);
			}
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %i ",P[i][j]);
		}
		printf("\n");
	}
    printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
			   G1[0][j]=M[i][0]*P[0][j];
			   printf(" %f ",G1[0][j]);
		    }
		    if(i==1){
		    	G1[1][j]=M[i][0]*P[0][j];
		    	printf(" %f ",G1[1][j]);
			}
			if(i==2){
				G1[2][j]=M[i][0]*P[0][j];
				printf(" %f ",G1[2][j]);
			}	
	    }
    }
    printf("/nG1: %f",G1[i][j]);
    printf("\n");
    
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
			    G2[0][j]=M[i][1]*P[1][j];
			    printf(" %f ",G2[0][j]);
		    }
		    if(i==1){
		    	G2[1][j]=M[i][1]*P[1][j];
		    	printf(" %f ",G2[1][j]);
			}
			if(i==2){
				G2[2][j]=M[i][1]*P[1][j];
				printf(" %f ",G2[2][j]);
			}	
	    }
    }
    printf("G2: %f ",G2[i][j]);
    printf("\n");
    
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
			    G3[0][j]=M[i][2]*P[2][j];
			    printf(" %f ",G3[0][j]);
		    }
		    if(i==1){
		    	G3[1][j]=M[i][2]*P[2][j];
		    	printf(" %f ",G3[1][j]);
			}
			if(i==2){
				G3[2][j]=M[i][2]*P[2][j];
				printf(" %f ",G3[2][j]);
			}	
	    }
    }
    printf("\n G3: %f",G3[i][j]);
    
    G[3][3]=G1[3][3]+G2[3][3]+G3[3][3];
    printf("%f",G[3][3]);
    
}

