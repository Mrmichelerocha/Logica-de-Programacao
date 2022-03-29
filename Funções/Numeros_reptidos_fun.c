#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int v[10], copy[10], i, j, repetido[10], repetido_c=0, n, repeti[10];

  printf("Digite 10 valores\n");

//Scan do vetor

  for (i = 0; i < 10; i++) {
      scanf("%d", &v[i]);
  }


// comparação dos vetores para colocar os numeros repetidos em R

for(i=0; i<10; i++){
    for(j=i; j<10; j++) // É um for vazio apenas p/ percorrer o segundo array até encontrar um valor repetido.
    {
      if(i!=j)
      {
        if (v[i]==v[j])
        {
          repetido[repetido_c]=v[i];
          repetido_c++;
        }
      }
    }
  }

  for(i=0; i<10; i++){
      for(j=i; j<10; j++) // É um for vazio apenas p/ percorrer o segundo array até encontrar um valor repetido.
      {
        if(i!=j)
        {
          if (repetido[i]==repetido[j])
          {
            repeti[repetido_c]=repetido[i];
            repetido_c++;
          }
        }
      }
    }
printf("\n\n");

if (repetido_c==0) {
  printf("Não há números repetidos.");
} else {
  for(i=0; i<repetido_c; i++)
    printf("%d ", repeti[i]);
}

  return 0;
}
