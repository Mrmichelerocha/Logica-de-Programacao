// Verifica palindromo

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
    int x, y, z, d;
        printf("Digite numero inteiro: ");
        scanf("%d",&x);
        y = x;
        z = 0;
    while(y != 0){
        d = y % 10;
        z = (z * 10) + d;
        y = y / 10;
 }
    if(x == z)
        printf("Palindromo \n");
    else
        printf("Nao eh Palindromo\n");

 return(0);
}
