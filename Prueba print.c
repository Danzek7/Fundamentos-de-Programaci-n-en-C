#include <stdio.h>
void main()
{
    //Declaración de variables
    char genero; //F: femenino, M: masculino
    char apellido[9];
    int edad;
    float estatura;
    
    genero='F'; //Se asigna un carácter. Se utiliza 
    strcpy(apellido,"Sanhueza"); //Así se "asignan".
    edad=21;
    estatura=1.65;
    
    printf("\nEl genero es: %c", genero);
    printf("\nEl apellido es: %s", apellido);
    printf("\nLa edad es: %i", edad);
    printf("\nLa edad es: %d", edad);
    printf("\nLa estatura es: %f", estatura);
    //% es "marcador de posición"
    //c,s,i,d,f es "tipo de datos"
    //Todo dentro del () es el "argumento
    //Texto literal y variable, separados por la coma dentro del ()
}


   
