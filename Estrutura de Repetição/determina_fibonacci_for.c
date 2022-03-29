//Fibonacci, um matemático da idade média, modelou o ritmo do crescimento da população de
//coelhos por meio de uma sequência de números naturais, que passou a ser conhecida como sequência
//de Fibonacci. O n-ésimo termo da sequência de Fibonacci Fn é dado pela fórmula de recorrência:
//Fn = Fn−1 + Fn−2, com n ≥ 3, F1 = 1 e F2 = 1. Escreva um algoritmo que dado n, determine Fn.


#include<stdlib.h>
#include<stdio.h>

int main(){
    int n, i;
    float num, x,y;
    scanf ("%f", &num);
    scanf ("%d", &n);
    x=num/2;
    for(i=0;i<=n;i++){
        y=0.5*(x+(num/x));
        x=y;
    }
    printf("%f\n",y);
return 0;
}
