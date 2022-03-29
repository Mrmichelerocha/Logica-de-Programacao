/*criar vetor com 10 elementos do tipo float
• calcular o valor médio dos elementos
• imprimir os elementos do vetor que estão acima da média com suas
respectivas posições.*/

// codigo pronto//
//... não esta indo em float //

#include <stdio.h>
#include <stdlib.h>

int main()
{

  float elem[10], media , soma=0;
int i, posi;
        printf("escreva 10 numeros\n");

// declarei o vetor//
        for (i=0; i<10; i++){
            scanf("%f", &elem[i]);
        }
// "para" somar as notas digitadas com a declaração do vetor//
        for (i=0; i<10; i++){
            soma += elem[i];
        }
// a media fora //
        media = soma/10;

// coloca a posição maior que a media//
            for(i=0;i<10;i++){
              if (elem[i] >= media){
                posi = i;
                printf(" esses sao os elementos acima da media  elem [%d]        %f\n\n", posi, elem[i] );
              }
            }


// imprimir na tela os resultados //
        printf("media dos elementos %f\n\n\n", media);


    return 0;

}
