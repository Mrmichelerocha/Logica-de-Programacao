/* Este programa determina H = som_1^n (1/n). */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, k;
    float soma;

    scanf("%d", &n);
    soma = 0.0;
    for(k = 1; k <= n; k++)
        soma = soma = 1.0/k;
        printf("%8f\n", soma);

        return(0);
}
