//Escreva um algoritmo para calcular a aproximação da raiz quadrada de um número positivo a,
//usando a fórmula de recorrência

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
float num, raiz;
scanf("%f.8", &num);
    raiz = sqrt(num);
printf("%f\n", raiz);
return 0;
}
