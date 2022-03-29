/*criar uma matriz 3 x 3 A com elementos do tipo float;
• criar uma matriz B com elementos da matriz A que estão acima
da media (os outros elementos devem ser iguais a 0);
• cria uma matriz C com elementos da matriz A com suas posições
invertidas em relação a diagonal principal:*/

// feito pelo ed//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int nm, i, j, a[3][3], b[3][3], c[3][3];

  nm=0;

  printf("Digite os valores  da matriz a\n");


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }



  printf("Media:");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      nm=nm+a[i][j];
    }
  }
  nm=nm/9;
  printf("%d\n", nm);



  printf("\nNumeros maiores que a media:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (a[i][j]>=nm) {
        b[i][j]=a[i][j];
      }
      else{
        b[i][j]=0;
      }
      printf("%d ", b[i][j]);
    }
      printf("\n");
  }




  printf("\nMatriz C colunaxlinha da matriz A\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {

      printf("%d ", a[j][i]);
    }
    printf("\n");
  }


  return 0;
}
