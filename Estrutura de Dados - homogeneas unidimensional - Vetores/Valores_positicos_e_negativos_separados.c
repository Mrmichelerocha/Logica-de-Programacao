/*• Criar vetores a, b e c com 10 elementos do tipo int;
• Os valores dos elementos de a podem ser fornecidos
pelo usuário
ou pre definidos.
• O vetor b deve conter os elementos positivos de a
• O vetor c deve conter os elementos negativos de a*/


//codigo pronto//


#include <stdio.h>
#include <stdlib.h>


int main() {

int elem_a[10], i, b[10]={0}, c[10]={0}, j=0, k=0;

printf(" Digite 5 numeros\n");

for (i=0; i< 10; i++){
    scanf("%d", &elem_a[i]);
  }

    for (i=0; i< 10; i++){

      if (elem_a[i] > 0){
        b[j] = elem_a[i];
        j++;

      }


      if (elem_a[i] < 0){

        c[k] = elem_a[i];
      k++;

    }
    }

      for (j=0; j< 5; j++){
printf("%d esses sao os numeros positivos\n", b[j]);
}
      for (j=0; j< 5; j++){
printf("%d esses sao os numeros negativos\n ", c[j]);
}



  return 0;
}
