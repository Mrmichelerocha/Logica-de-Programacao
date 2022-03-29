//calculo fatorial
//Dado um número inteiro n > 0, calcule n!.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,fat=1;
    scanf("%d",&x);
    while(x>1){
        fat=fat*x;
        x=x-1;
    }
    printf("%d\n",fat);
    return(0);
}
