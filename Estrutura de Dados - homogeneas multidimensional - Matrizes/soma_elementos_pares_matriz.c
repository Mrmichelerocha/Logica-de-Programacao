/*criar e inicializar uma matriz A 3 x 3
• achar a soma dos elementos pares.*/


///ta innndooo//
//codigo pronto//

#include <stdio.h>
#include <stdlib.h>

int main() {

            int a[3][3];
            int i,j,soma=0;

            printf("Matriz a \n\n");
            printf("Digite uma matriz 3x3 \n" );


            for ( i=0; i<3; i++){
              for ( j=0; j<3; j++){
                  scanf("%d", &a[i][j]);
              }
            }

                printf("\n\n");

            for ( i=0; i<3; i++){
              for ( j=0; j<3; j++){
                if (a[i][j]%2==0) {
                  soma += a[i][j];
                }
              }
            }

printf(" soma dos elementos pares %d", soma);
  return 0;
}
