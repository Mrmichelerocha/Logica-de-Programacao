//Suponha que queremos inserir um novo elemento x (um número inteiro)
//em um vetor ordenado v[0...n-1] de forma que o vetor resultante v[0...n]
//continue ordenado. É claro que você só deve inserir elementos em um vetor se tiver
// certeza que ele não está cheio, ou seja, com todas as posições declaradas ocupadas.
//Para isso, declare um vetor de tamanho 100 e considere  que o vetor  inicialmente pode
//ter tamanho  menor ou igual 99.

#include<stdio.h>
#include<stdlib.h>

void buscainsere(int x, int n, int v[]);

void buscainsere(int x, int n, int v[])
{
    int j;
    int aux;

    for(j = n; v[j - 1] > x && j > 0; j--)
    {
        v[j] = v[j - 1] ;
    }
        v[j] = x;
}

int main()
{
    int vetor[100], n, x, i;

    printf("Digite o tamanho do vetor, sendo <= 99: ");
    scanf("%d", &n);

    printf("Escreva seu vetor: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para colocar no vetor: ");
    scanf("%d", &x);

    buscainsere(x, n, vetor);

    for(i = 0; i < n + 1; i++)
    {
        printf("%d ", vetor[i]);
    }

return 0;
}
