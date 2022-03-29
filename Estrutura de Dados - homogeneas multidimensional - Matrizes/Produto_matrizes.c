/*O programa deve calcular a matriz C, resultante do produto de duas
matrizes A (4 x 2) e B( 2 x 3 )
A matriz C ( m X q ) resultante do produto das matrizes A (m x n) e
B (n x q) pode ser calculada como:*/


#include <stdio.h>
 #include <stdlib.h>

 int main() {
            int matriz[4][2], matrizb[2][3],i,j, matrizc[4][3], i1, j1 ;

            printf("escreva uma matriz 4x2");
                for ( i1 = 1; i1 <= 4; i1++) {
                  for ( j1 = 1; j1 <= 2; j1++) {
                    scanf("%d",&matriz[i1][j1] );
                  }
                }

                            printf("escreva uma matriz2x3");
                                for ( i = 1; i <= 2; i++) {
                                  for ( j = 1; j <= 3; j++) {
                                    scanf("%d",&matrizb[i][j] );
                                  }
                                }


                for ( i1 = 0; i1 < 4; i1++) {
                            for ( j = 1; j < 3; j++) {
                                i1=1;
                                j1=1;
                                i=1;
                                      matrizc[i][j]=  matriz[i1][j1]*matrizb[i][j];
                            }
                                              for ( j = 1; j < 3; j++) {
                                                i1=1;
                                                j1=2;
                                                i=2;
                                                      matrizc[i][j]=  matriz[i1][j1]*matrizb[i][j];
                                                    }

                }

                for ( i = 1; i <= 2; i++) {
                  for ( j = 1; j <= 3; j++) {
                    printf("%d essa e o produto\n", matrizc[i][j] );
                  }
                }



   return 0;
 }
