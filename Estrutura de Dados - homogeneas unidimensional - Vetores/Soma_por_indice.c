/*criar vetor com 10 elementos do tipo int
• achar a soma dos elementos pares
• achar a soma dos elementos que se encontram nas posições com
índice par ( c[0], c[2], c[4])*/

// codigo pronto////

#include <stdio.h>
#include <stdlib.h>

int main() {

        int elem[10], i, soma=0, posi=0, somapar;

          printf("escreva 10 numeros\n" );
        for (i = 0; i < 10; i++){
                scanf("%d", &elem[i]);
                }
                for (i = 0; i < 10; i++){
                    if (elem[i] % 2==0){
                    soma += elem[i];
                  }
                }
                for ( i = 0; i < 10; i++) {
                if (i%2==0) {
                  somapar += elem[i];
                }
              }
                  printf("Soma dos elementos pares: %d \n",soma);
                  printf("Soma dos elementos nas posições pares %d\n", somapar );


  return 0;
}
