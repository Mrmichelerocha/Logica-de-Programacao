/*Selecionar valores repetidos de um vetor de 10 elementos
 sem repetições.*/

// dando tudo errado//
// deu muito errado mesmo //
//agora deu cert0//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int v[10], copy[10], i, j, repetido[10], k=0, n;

  printf("Digite 10 valores\n");

//Scan do vetor

  for (i = 0; i < 5; i++) {
      scanf("%d", &v[i]);
  }


// comparação dos vetores para colocar os numeros repetidos em R

for(i=0; i<5; i++)
{
    for(j=i; j<5; j++) // É um for vazio apenas p/ percorrer o segundo array até encontrar um valor repetido.
  {
      if(i!=j)
      {
        if (v[i]==v[j])
        {
          repetido[k]=v[i];
          k++;
        }
      }
    }
  }



printf("\n\n");

if (k==0) {
  printf("Não há números repetidos.");
} else {
  for(i=0; i<k; i++)
    printf("%d ", repetido[i]);
}

  return 0;
}
