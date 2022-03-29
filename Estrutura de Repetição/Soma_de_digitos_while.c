//Escreva um algoritmo que receba um número inteiro positivo n e devolva a soma dos dígitos de n.

#include<stdlib.h>
#include<stdio.h>
int main(){
    int n, s, a;
    printf("Digite o valor de n\n");
    scanf("%d", &n);
    s=0;
    while(n>0){
        a=n%10;
        s=s+a;
        n=n/10;
    }
    printf("%d", s);
return(0);
}
