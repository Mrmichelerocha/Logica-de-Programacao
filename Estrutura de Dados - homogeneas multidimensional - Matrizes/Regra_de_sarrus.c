/*O programa deve calcular o determinante de uma
matriz A 3x3
regra de Sarrus:*/

//codigo pronto//

#include <stdio.h>
#include <stdlib.h>

int main() {
 int i, a[3][3], det, j, dett, det1, det2, det3, det4, det5;

 printf("escreva uma matriz 3x3\n" );

        for (i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
          }
        }
               det = (a[0][0]*a[1][1]*a[2][2]);
               det1 = (a[0][1]*a[1][2]*a[2][0]);
               det2= (a[0][2]*a[1][0]*a[2][1]);
               det3 = (a[0][2]*a[1][1]*a[2][0]);
               det4 =(a[0][0]*a[1][2]*a[2][1]);
               det5 = (a[1][0]*a[0][1]*a[2][2]);

           dett = (det + det1 + det2) - (det3 + det4 + det5);

              printf(" o valor do determinante [%d]", dett);


  return 0;
}
