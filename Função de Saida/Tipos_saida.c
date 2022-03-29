#include<stdio.h>

int main(int argc, char const *argv[])
{
    int vint; //Variavel Intera
    char vchar; //Variavel Caracter
    float vflot; //Variavel Flutuante
    double vflut; //Variavel Flutuante
    // void Variavel Sem Valor;

    vint = 10;
    vchar = 'a';
    vflot = 10.5;
    vflut = 10.0008;

    printf("Oi, eu sou a VINT: %i \n", vint );
    printf("Oi, eu sou a VCHAR: %c \n", vchar );
    printf("Oi, eu sou a VFLOT: %f \n", vflot );
    printf("Oi, eu sou a VFLUT: %f \n", vflut );
    return 0;
}
