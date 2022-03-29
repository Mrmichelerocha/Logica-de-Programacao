//raio


#include <stdio.h>
#include <stdlib.h>

int raio(int x, int y, int raio);
int conta ( int a, int b);

int main() {
    int pontox, pontoy ,cx, cy, r, cont, cont2;

    printf("digite 2 pontos\n x: \n y: \n" );
     scanf("%d", &pontoy);
     scanf("%d", &pontox );

    printf("entre com centro do circulo\n x: \n y: \n" );
     scanf("%d",  &cy );
     scanf("%d", &cx );

     printf("entre com o raio\n" );
      scanf("%d", &r );

      cont = conta(pontox, cx);
      cont2 = conta(pontoy, cy);

      raio(cont,cont2,r);

  return 0;
}

int conta( int a, int b){
    int e;

    e = (a*a) - (b*b);

    return e;

}

int raio(int x, int y, int raio){
 int condicao;

      condicao = x + y;

    if ( condicao <= raio) {
         printf("*ESTA NO CIRCULO*\n");
    }
    else {
        printf("NAO ESTA NO CIRCULO\n" );
    }

    return 0;

}
