//Escreva um programa que leia três
//números (A, B e C) e calcule a seguinte
//expressão:
//D = (R + S) / 2, onde R = (A+B)² e
//S = (B + C)²


#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, b, c, d,r,s;


        printf("escreva um numero");
        scanf("%d", &a);

        printf("escreva um numero");
        scanf("%d", &b);

        printf("escreva um numero");
        scanf("%d", &c);

        r = (a+b)*2;
        s = (b + c)*2;
        d = (r + s) / 2;

    printf("esse e o resultado de uma conta aleatoria   %d", d);




    return 0;
}
