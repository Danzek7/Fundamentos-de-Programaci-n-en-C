#include <stdio.h>
void main()
{
	int v[10]; //vector
	int i; //índice
	
	for(i=0;i<9;i++){
		printf("\nIngrese el elemento v[%d]: ",i);
		scanf("%d",&v[i]);
	}
}
