//Dados três valores x, y, z verifique se eles podem ser os comprimentos dos lados
//de umtriângulo e, se forem, classifique se é um triângulo equilátero, isósceles ou
//escaleno.Se não formarem um triângulo escreva uma mensagem.Informações importantes:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}
