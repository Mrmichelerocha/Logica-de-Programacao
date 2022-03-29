/*Criar vetores a, b com 5 elementos do tipo
 int e vetor c com 10
elementos;
• Os valores dos elementos de a e b podem ser
fornecidos pelo
usuário ou pre definidos.
• O vetor c deve conter os elementos de a e b de
forma intercalada.*/

// não intercada o vet2//

#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int vet[5]={0}, vet2[5]={0}, vet3[10]={0}, i, k, j;

// aqui le os numeros de A
          printf("escreva 5 numeros\n" );
     for (j=0; j<5; j++){
         scanf("%d", &vet[j]);
     }
// aqui le os numeros de B
          printf("escreva 5 numeros\n" );
     for (k=0; k<5; k++){
         scanf("%d", &vet2[k]);
     }
// aqui intercala
// vet[0]=1 vet2[0]=1 vet[1]=2 vet2[1]=2
            for(i=0;i<10;i++){
                if(i%2==0){
                  vet3[i]=vet[j];
                  j++;
                        }
                else {
                  vet3[i]=vet2[k];
                  k++;
                        }
              }

              for(i=0; i<10; i++)
          {
              printf("vet[%d]   %d\n", i, vet3[i]);
          }

   return 0;
}
