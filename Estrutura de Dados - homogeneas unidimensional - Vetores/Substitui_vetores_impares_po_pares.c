/*Criar vetor a com 10 elementos e vetor b com 5 elementos do tipo int.
Criar função que recebe dois vetores (a e b) e substitui todos os elementos
ímpares em vetor a pelo menor elemento do vetor b.
Fazer uso da função auxiliar para achar o maior elemento de um vetor.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subv(int *a, int *b);
int minv(int *b);

int main(int argc, char const *argv[]) {
  int a[10], b[5], i, v[10];

  printf("Digite o vetor 'a' de 10 elementos\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  printf("Digite o vetor 'b' de 5 elementos\n");
  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &b[i]);
  }


  for (i = 0; i < 10; i++) {
    v[i]=subv(a, b);
    printf("%d ", a[i]);
  }
  return 0;
}

int subv(int *a, int *b){
int i;

  for (i = 0; i < 10; i++) {
    if (a[i]%2 != 0) {
      a[i]= minv(b);
    }
  }

  return a[i];
}

int minv(int *b){
int menor, i;

  for (i = 0; i < 5; i++) {
    if (b[i]<menor) {
      menor=b[i];
    }
  }
  return menor;
}
