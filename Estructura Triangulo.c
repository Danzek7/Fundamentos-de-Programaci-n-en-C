#include <stdio.h>
#include <math.h>
void main(){
	typedef struct Puntos{
		int xy[3][3];
	}Punto;
	int i;
	int j;
	Punto pun[3];
	for(i=0;i<2;i++){
		for(j=0;j<1;j++){
			printf("\nIngrese el punto [x][y] %i,%i: ",i,j);
			scanf("%i",&pun[i].xy[i][j]);
		}
	}
}
