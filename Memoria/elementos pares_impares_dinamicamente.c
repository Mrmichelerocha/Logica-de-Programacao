/*Criar o vetor a com a quantidade de elementos determinada pelo usuário.
Criar o vetor b contendo os elementos pares do vetor a.
Criar o vetor c contendo os elementos positivos do vetor a
Os vetores b e c devem ser criados dinamicamente.*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int *b, *c, a[100];
int i, k=0, l=0, n, count=0, countP=0;

  printf("Digite o tamanho do vetor 'a'\n");
  scanf("%d", &n);

  printf("Digite o vetor 'a'\n");
  for (size_t i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (a[i]>0) {
      count++;
    }
    if (a[i]%2==0) {
      countP++;
    }
  }

  b= (int*) malloc(countP*sizeof(int));
  c= (int*) malloc(count*sizeof(int));

  for (size_t i = 0; i < n; i++) {
    if (a[i]%2==0) {
      b[k]=a[i];
      k++;
    }
    if (a[i]>0) {
      c[l]=a[i];
      l++;
    }
  }

  for (size_t i = 0; i < countP; i++) {
    printf("b[%d]= %d\n", i, b[i]);
  }
  for (size_t i = 0; i < count; i++) {
    printf("c[%d]= %d\n", i, c[i]);
  }
  return 0;
}
