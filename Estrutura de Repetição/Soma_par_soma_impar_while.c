/*Esse programa recebe x e devolve a soma dos x primeiros numeros pares e a soma
dos x primeiros numeros impares*/
//L3 - p2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,it=1,soma=0,sp=0,si=0;
    scanf("%d", &x);
    while(it<=x){
        sp+=2*it;
        si+=2*it-1;
        it++;
    }
    printf("%d\n%d\n",sp,si);
    return(0);
}
