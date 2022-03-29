//Dados dois números inteiros n e k, com k ≥ 0 e n 6= 0, determine n^k
//L3 - p3

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,pot,it=1;
    scanf("%d\n%d",&x,&y);
    pot=1;
    while(it<=y){
        pot=pot*x;
        it++;
    }
    printf("%d\n",pot);
    return(0);
}
