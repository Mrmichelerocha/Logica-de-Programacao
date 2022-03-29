/* Este verifica se um numero é primo */

#include<stdio.h>
#include<stdlib.h>

int main (){
    int n, i, p;

    scanf("%d", &n);
    p = 1 ;
    for(i = 2; i <= n/2; i++){
        if ( n%i == 0){
            p=0;
            i=n;
        }
    }
    if(p == 0)
      printf("Não\n");
    else
     printf("Sim\n");

    return(0);
}
