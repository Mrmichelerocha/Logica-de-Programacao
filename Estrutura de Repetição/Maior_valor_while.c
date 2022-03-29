//1. Escreva um programa que leia 10 valores, verifique e imprima o maior valor digitado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, maior,n;

    maior = 0;
    printf("escreva um numero");
    scanf("%d", &num);

    num = maior;
    n = 0;
   while (n<5){
    n++;
    printf("escreva um numero");
    scanf("%d", &num);

    if (num > maior) maior = num;

   }
  printf("numero maior %d", maior);

    return 0;
}
