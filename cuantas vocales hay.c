#include <stdio.h>
#include <string.h>
void main()
{
	char a[100];
	int i=0;
	int vocal=0;
	printf("Ingrese la primera cadena ");
	fgets(a,30,stdin);
	while(a!='\0')
	{
		if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
    	{
		  vocal=vocal+1;
		  i=i+1;
    	}	
	}
	printf("La primera cadena tiene %i vocales ",vocal);
}
