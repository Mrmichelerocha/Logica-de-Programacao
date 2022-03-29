/*criar uma matriz A (4x4)
• achar o elemento máximo dessa matriz e a sua posição*/



// feito bonitinho por mim
//exercicio pronto///

#include <stdio.h>
#include <stdlib.h>

int main() {


int matriz[4][4], i ,j, maior, posi1,posi;


printf("enter an array 4x4\n" );

            for (size_t i = 0; i < 4; i++){
              for (size_t j = 0; j < 4; j++) {
                scanf("%d", &matriz[i][j] );
              }
            }

maior = matriz[0][0];

            for (size_t i = 0; i < 4; i++){
              for (size_t j = 0; j < 4; j++) {
                if (maior < matriz[i][j]) {
                  maior = matriz[i][j];
                  posi = i;
                  posi1 = j;
                }
              }
            }

              printf("its in position [%d][%d] highest value is %d\n",posi,posi1, maior );


  return 0;
}
