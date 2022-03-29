#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, media;

    printf("Entre com um numero\n");
    scanf("%d", &num1);
    printf("Entre com um numero\n");
    scanf("%d", &num2);

    media = (num1 + num2) / 2 ;

    if( media >= 7 ){
        printf ("Parabens passou o menino\n");
    }else{
        printf ("Reprovou coisinho\n");
    }

    printf("Resultado: %d", media, num1, num2);

    return 0;
}
