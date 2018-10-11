#include <stdio.h>
void main()
{
	int valor;
	printf("Ingrese un valor ");
	scanf("%i",&valor);
	switch(valor)
	{
		case 1:
		    printf("Has ingresado  el uno");
		    break;
		case 2:
		    printf("Has ingresado el dos");
		    break;
		case 3:
		    printf("Has ingresado el tres");
		    break;
		default:
		    printf("No has ingresado estos terminos");
		    break;
	}
}
