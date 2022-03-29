//Dada uma sequência de números inteiros diferentes de zero, terminada por zero, calcule a soma
//dos termos da sequência.
//L3 - p1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, soma=0;
    scanf("%d", &x);
    while(x!=0){
        soma+=x;
        scanf("%d", &x);
    }
    printf("%d\n", soma);
    return(0);
}
