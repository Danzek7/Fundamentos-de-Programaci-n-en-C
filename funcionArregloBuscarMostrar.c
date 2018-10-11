#include <stdio.h>
int buscar(int arregloCY[], int tamanio, int numero);
void mostrar(int arregloCopia[], int tamanio);

void main()
{
     int i;
     int num;
     int tamanio;
     printf("Ingresa tamanio del arreglo: ");
     scanf("%d",&tamanio);
     int arreglo[tamanio];

    //ingresamos valores para el arreglo
     for (i=0; i<tamanio;i++){
          printf("[%d]: ", i);
          scanf("%d",&arreglo[i]);
    }


     printf("¿Qué número hay que buscar ?\n");
     scanf("%d",&num);
     printf("\n");
     //le pasamos a mostrar el arreglo, no se ponen "[]" y el tamanio (no es necesario)
     mostrar(arreglo,tamanio);

     int indice=buscar(arreglo,tamanio,num);
     if (indice != -1){
         printf("El número %d está en la posición %d \n",num, indice);
     }else{
         printf("El número %d no se encontro en el arreglo\n",num);
    }
}


int buscar(int arregloCY[], int tamanio, int numero){
    int i;
    int pos=-1;

    for(i=0;i<tamanio;i++){
        if (arregloCY[i]==numero){
           pos=i;
       }
    }

    return pos;
}

void mostrar(int arregloCopia[], int tamanio){
     int i;
     for (i=0; i<tamanio; ++i)
          printf("%d\t",arregloCopia[i]);
     printf("\n");
}

