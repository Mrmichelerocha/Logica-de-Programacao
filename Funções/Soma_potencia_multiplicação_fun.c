//Soma, potencia, multiplicação

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float sum(float x, float y);
float sub(float x, float y);
float mult(float x, float y);
float pot (float x, float y);

int main() {
    float a, m, n;

    printf("*CALCULADORA*\n 1 para Soma\n 2 para Subtracao \n 3 para multiplicacao \n 4 para potenciacao \n 5 para finalizar \n escolha :  " );
      scanf("%f", &a );

       if (a == 1) {
          printf("escreva um numero\n" );
            scanf("%f", &m );
              printf("escreva um numero\n" );
                scanf("%f", &n );
              sum(m,n);
       }
            else if(a==2){
              printf("escreva um numero\n" );
                scanf("%f", &m );
                  printf("escreva um numero\n" );
                    scanf("%f", &n );
                sub(m,n);
            }
                    else if (a==3){
                      printf("escreva um numero\n" );
                        scanf("%f", &m );
                          printf("escreva um numero\n" );
                            scanf("%f", &n );
                          mult(m,n);
                    }

      else if(a ==4){
          printf("escreva um numero\n" );
            scanf("%f", &m );
              printf("escreva um numero\n" );
                scanf("%f", &n );
            pot(m, n);
         }


  return 0;
}

float sum(float x, float y){
  float soma;

        soma = x+y;

        printf("[%f] soma \n\n", soma );

      return main();

}
float sub(float x, float y){
  float subi;

        subi = x - y;

        printf("[%f] subitracao\n\n ", subi );

    return main();
}

float mult(float x, float y){
  float multi;

        multi = x * y;

        printf("[%f] multiplicacao \n\n", multi );

    return main();
}
float pot (float x, float y){
  float poti;

        poti = pow(x,y);

        printf("[%f] potenciacao \n\n", poti );

    return main();

}
