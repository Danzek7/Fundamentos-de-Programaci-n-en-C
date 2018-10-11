#include <stdio.h>

void mostrar(int A[3][3], int tamanio){
    int i,j;
     for (i=0; i<tamanio; ++i){
          for (j=0; j<tamanio; ++j){
               printf("%d ",A[i][j]);
          }
        printf("\n");
     }
}

void main()
{
 int i,j;
 //int matriz[3][3] = {{0},{0},{0}};
int matrizA[3][3];
for (i=0; i<3; i++){
      for (j=0; j<3; j++){
           printf("MatrizA [%d][%d]: ", i, j);
           scanf("%d",&matrizA[i][j]);
      }
      printf("\n");
    }
 mostrar(matrizA, 3);
 int matrizB[3][3];
 for (i=0; i<3; i++){
      for (j=0; j<3; j++){
           printf("MatrizB [%d][%d]: ", i, j);
           scanf("%d",&matrizB[i][j]);
      }
      printf("\n");
    }
 mostrar(matrizB, 3);
}
