#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, soma;

    printf("Entre com um numero\n");
    scanf("%d", &num1);
    printf("Entre com um numero\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado: %d, entre %d e %d", soma, num1, num2);

    return 0;
}

/*
Operadores aritmeticos
= atribuiçãonce
+ soma
- subtraçãonce
/ divisãonce
% modulo (devolve o resto da divisão de inteiros)

Operadores relacionais
> maior
< menor
<= menor ou igual
== igualdade
!= diferente

Operadores de incremento
++ num+1
-- num-1
+= num=num+1
-= num=num-1
/= num=num/1
*= num=num*1
%= num=num%1

Operadores logicos
&& (E)
|| (OU)
! (não)

*/
