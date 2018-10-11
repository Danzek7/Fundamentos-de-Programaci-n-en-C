#include <stdio.h>
void main()
{
	int m[10][10];
	int n;
	int i;
	int j,
	do{
		printf("Ingrese el tamaño de la matriz nxn: ");
		scanf("%i",&n);
	}while(n>10&&n<=0);
	for(j=0;j<n;j++){
		m[0][j]=j+1;
	}
