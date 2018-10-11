#include <stdio.h>
#include <string.h>
void main()
{
	char a[30];
	char b[30];
	int i=0;
	int j=0;
	int vocal=0;
	printf("Ingrese la primera cadena ");
	fgets(a,30,stdin);
	printf("Ingrese la segunda cadena ");
	fgets(b,30,stdin);
	printf("El primer nombre es %s",a);
	printf("\nEl segundo nombres es %s",b);
	if(strcmp(a,b)==0)
	{
		printf("Las cadenas son iguales");
	}else{
	    printf("\nLas cadenas no son iguales");
    }  
	
	while(a[i]!='\0')
	{
		i=i+1;
	}
	while(b[j]!='\0')
	{
		j=j+1;
	}
	printf("\nEl tamaño de la primera cadena es: %i",i-1);
	printf("\nEl tamaño de la segunda cadena es: %i",j-1);
}
