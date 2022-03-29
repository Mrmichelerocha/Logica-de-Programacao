#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float divo(float x, float y);

float main() {
  float m, n, a,b;

    printf("CALCULADORA\n 1 divisao \n entre com o numero: \n" );
      scanf("%f", &a);

      if (a == 1 ) {
        printf("entre com numeros : " );
          scanf("%f", &m );
        printf("entre com numeros : " );
          scanf("%f", &n );
              divo(m,n);
      }
  return 0;
}
float divo(float x, float y){
      float divi;

      if (y != 0) {
            divi = x / y;
            printf("%d divisão\n", divi );
      }
      else{
      printf("invalido\n");
      return main();
    }

  return main();
}
