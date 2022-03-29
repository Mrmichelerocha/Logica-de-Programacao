//O custo ao consumidos de um carro novo é a
//soma do custo de fábrica com a percentagem
// do distribuidor e dos impostos
//(aplicados ao custo de fábrica).
//Supondo que o percentual do distribuidor
//seja de 28% e os impostos de 45%,
// escreva um programa que leia o custo de
// fábrica do carro e escreve seu valor final.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float percdis, cust, impos, carro;

    printf("qual o preço de fabrica do seu carro?");
    scanf("%f", &cust);

        percdis = cust*0.28;
        printf("percdis%f\n", percdis);
        impos = cust*0.45;
        printf("impos%f\n", impos);
        carro = percdis+impos+cust;


    printf("preço do carro é %f", carro);



    return 0;
}
