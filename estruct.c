#include <stdio.h>
void main(){
	typedef struct personas{
		int edad;
		char a[2];
		char nombre[20];
		int curso;
	}alumnos;
	int i;
	alumnos alum[2];
	for(i=0;i<1;i++){
		printf("\nIngrese la edad del alumno %i: ",i);
		scanf("%i",alum[i].edad);
	}
	for(i=0;i<1;i++){
	    printf(" %i ",alum[i].edad);
	}
}
