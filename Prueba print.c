#include <stdio.h>
void main()
{
    //Declaraci�n de variables
    char genero; //F: femenino, M: masculino
    char apellido[9];
    int edad;
    float estatura;
    
    genero='F'; //Se asigna un car�cter. Se utiliza 
    strcpy(apellido,"Sanhueza"); //As� se "asignan".
    edad=21;
    estatura=1.65;
    
    printf("\nEl genero es: %c", genero);
    printf("\nEl apellido es: %s", apellido);
    printf("\nLa edad es: %i", edad);
    printf("\nLa edad es: %d", edad);
    printf("\nLa estatura es: %f", estatura);
    //% es "marcador de posici�n"
    //c,s,i,d,f es "tipo de datos"
    //Todo dentro del () es el "argumento
    //Texto literal y variable, separados por la coma dentro del ()
}


   
