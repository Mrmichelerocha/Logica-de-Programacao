//Escrever um programa que leia o nome de um aluno
//e as notas das 3 provas que ele obteve no
//semestre. No final informar o nome do aluno e a
//sua média baseada no cálculo:
//((2 * nota1) + (2 * nota2) + notaTF)/5.

#include <stdio.h>
#include <stdlib.h>

int main()
{

 int soma, n1, n2, n3, notfinal;
 float nf;


    printf(" qual seu nome");
    printf("digite sua primeira nota");
    scanf("%d", &n1);
    printf("digite sua primeira nota");
    scanf("%d", &n2);
    printf("digite sua primeira nota");
    scanf("%d", &n3);

        soma = n1+n2+n3;
        printf("soma%d\n",soma);
        notfinal = (2 * n1) + (2 * n2) +(2*n3);
        printf("notfinal%d\n\n",notfinal);
        nf = (soma + notfinal)/5;

    printf(" essa é sua nota %f", nf);

        return 0;
}
