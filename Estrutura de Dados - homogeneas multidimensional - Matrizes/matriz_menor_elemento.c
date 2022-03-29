/*Faça um programa que leia um valor de n. Este n será o tamanho de uma matriz A[100][100].
A seguir, leia cada um dos elementos da matriz A, encontre o menor elemento desta matriz e a sua
posição, ou seja, os índices i e j.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    int a[100][100], n, i, j, elemin, imin, jmin;

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    elemin = a[0][0];
    imin = 0;
    jmin = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] < elemin){
               elemin = a[i][j];
               imin = i;
                jmin = j;
            }
        }
    }

    printf("menor valor: %d\n", elemin);
    printf("posicao: (%d,%d)\n", imin, jmin);


    return (0);
}
