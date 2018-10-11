#include <stdio.h>
void main()
{
	int m[2][3];
	int i; //indice de matiz
	int j; //''''
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Ingrese el elemento m[%d,%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
}
