//Maximo de um vetor


#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, max;
    float A[2];

    printf("Digite os valores de n \n");
    for(i=0; i<3; i++){
        printf("%d \n", i+1);
        scanf("%f", &A[i]);
    }
    for(i=0; i<3; i++){
        if(A[i]>max){
            max=A[i];

}
}
}
