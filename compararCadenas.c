#include <stdio.h>

#include <string.h>
/*
require "string.h";
strcmp(): esta funci�n compara ambas cadenas y
regresa la diferencia comparativa en el n�mero de caracteres.

strncmp(): esta es la misma que strcmp(),
excepto que compara los primeros caracteres n.
 Se considera m�s segura ya que evita que aparezca
 un error debido al desbordamiento.

*/
void main(){
    /*
    la diferencia entre scanf y gets
    char string1[]="";
    char string2[]="";
    printf("Ingrese palabra 1");
    scanf("%c",&string1);
    gets(string1);
    printf("Ingrese palabra 2");
    scanf("%c",&string2);
    */
    char a[10];
    char b[10];
    printf("Ingresa el nombre 1: ");
    //diferencia entre fgets y gets
    //scanf("%2s",a);// 24 caracteres a tomar
    //gets(a);//diferencia con el scanf
    fgets(a, 10, stdin);
    //se lee de la forma printf("Tu nombre es: %s\n",a);
    printf("Ingresa el nombre 2: ");
    //diferencia entre fgets y gets
    //scanf("%2s",a);// 24 caracteres a tomar
    //gets(a);//diferencia con el scanf
    fgets(b, 10, stdin);
    printf("El nombre 1 es: %s\n",a);
    printf("\nEl nombre 2 es: %s\n",b);


    if(strcmp(a,b)==0){
        printf("Son iguales");
    }else{
        printf("NO son iguales");
    }








    int i=0,j=0;
    //saber el tama�o de una cadena
    while (a[i] != '\0') {
        //printf ("%c", a[i]);
        i=i+1;
    }
    while (b[j] != '\0') {
        //printf ("%c", a[i]);
        j=j+1;
    }
    printf("\nEl tama�o de la palabra 1 es : %i",i-1);
    printf("\nEl tama�o de la palabra 2 es : %i",j-1);
    //leer una posici�n printf ("%c", a[3]);


}
