#include <stdio.h>

int main(int argc, char const *argv[])
{
    int continuar;

    printf("para o caso 1, digite 1\n");
    printf("para o caso 2, digite 2\n");
    printf("para o caso 3, digite 3\n");

    scanf("%d", &continuar);

    switch(continuar)
    {
        case 1:
            printf("opa salve, eu sou o caso 1");
            break;

        case 2:
            printf("é nois parceiro, caso 2 prazer");
            break;

        case 3:
            printf("ola meu consagrado, caso 3 ao seu dispor");
            break;

        default:
            printf("Digite uma opcao valida\n");
    }

return 0;
}
