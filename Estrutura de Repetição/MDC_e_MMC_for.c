//2. Elabore um algoritmo que obtenha:
//a. O MMC entre dois n�meros;
//b. O MDC entre dois n�meros.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, i;
    printf("escreva um numero");
    scanf("%d", &num1);

 for (i=2; i< num1; i++){

    num1 = num1%i;
    printf("escreva %d", i);
 }


    return 0;
}
