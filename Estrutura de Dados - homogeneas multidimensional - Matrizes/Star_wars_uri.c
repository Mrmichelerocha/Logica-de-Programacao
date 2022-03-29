/*Há muito tempo atrás, em uma galáxia muito, muito distante . . .
Após o declínio do Império, sucateiros estão espalhados por todo o universo procurando por um
sabre de luz perdido. Todos sabem que um sabre de luz emite um padrão de ondas específico: 42
cercado por 7 em toda a volta. Você tem um sensor de ondas que varre um terreno com N × M
células. Veja o exemplo abaixo para um terreno 4 × 7 com um sabre de luz nele (na posição (2, 4)).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100][100], i, j, is, js, n, m;
    is = 0;
    js = 0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &A[i][j]);
    for(i = 1; i < n-1; i++){
        for(j = 1; j < m-1; j++){
            if(A[i][j]==42){
                if(A[i-1][j-1]== 7 && A[i-1][j]== 7 && A[i-1][j+1]== 7){
                        if(A[i][j-1]== 7 && A[i][j+1]== 7){
                            if(A[i+1][j-1]== 7 && A[i+1][j]== 7 && A[i+1][j+1]== 7){
                                is = i + 1;
                                js = j + 1;
                            }
                        }

                }
            }
        }
    }
    printf("%d %d\n", is, js);

    return(0);
}
