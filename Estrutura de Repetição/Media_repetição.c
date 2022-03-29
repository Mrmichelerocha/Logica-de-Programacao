#include<stdio.h>
#include<stdlib.h>

// media aritmetica para 50 alunos
int main(int argc, char const *argv[])
{
    int num1, num2, media;
    int cont;
    cont = 0;
    while (cont < 3){
        // entrada valores
        printf("\nEntre com um numero\n");
        scanf("%d", &num1);
        printf("Entre com um numero\n");
        scanf("%d", &num2);

        // media
        media = (num1 + num2) / 2 ;

        // condição de aprovação
        if( media >= 7 ){
            printf ("Parabens passou o menino\n");
        }else{
            printf ("Reprovou coisinho\n");
        }

        // O resultado
        printf("Resultado: %d", media, num1, num2);

  // contador
        cont ++;
    }

    return 0;
}
