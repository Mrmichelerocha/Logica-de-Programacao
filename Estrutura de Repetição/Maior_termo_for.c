// Dado n > 0 e uma sequência de n números inteiros, escreva um algoritmo que determine
//maior termo (em valor absoluto) da sequência.

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, a, aux, i, tmax;
    scanf("%d", &n);
    aux = 0 ;
    for(i = 0; i < n; i++){
        scanf("%d", &a);
        if (abs (a) > aux){
            tmax = a;
            aux = abs (a);
        }
    }
    printf("%d\n", tmax);

    return(0);
}
