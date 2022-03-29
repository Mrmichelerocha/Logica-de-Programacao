/*Criar o vetor a com 15 elementos do tipo int
Criar o vetor b composto por elementos positivos do vetor a
Vetor b deve ser criado dinamicamente.*/


#include <stdio.h>
#include <stdlib.h>


//
int max ( int *b, int count );
int subst (int *a, int *b, int count);
//
int main() {
    int a[100], b[100], i, count;

        printf("entre com o valor do vetor" );
          scanf("%d", &count );

        for (size_t i = 0; i < count; i++) {
              printf("entre com o %d numero", i);
                scanf("%d", &a[i]);
        }
        for (size_t i = 0; i < count; i++) {
              printf("entre com o %d numero",i);
                scanf("%d", &b[i]);
        }
//
  subst(a, b, count);
        for (size_t i = 0; i < count; i++) {
          printf("numeros rearranjados %d\n", a[i] );

        }
  return 0;
}
//
int max (int *b, int count){
  int i, maior=b[0];
        for (size_t i = 0; i < count; i++) {
              if (b[i] >= maior ) {
                maior = b[i];

              }
        }
return maior;
}
//
int subst (int *a, int *b, int count ){
  int i, maximo;
  maximo=max ( b, count);
        for (size_t i = 0; i < count; i++) {
              if (a[i] < 0) {
                  a[i] = maximo;
              }
        }
  return;
}
