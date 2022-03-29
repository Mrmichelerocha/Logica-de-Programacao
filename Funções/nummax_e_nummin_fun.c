//numeros maximo e minimos usando funções


#include <stdio.h>
#include <stdlib.h>


int nummax(int *x);
int nummin(int *x);

int main() {
      int elem[5], i;

    printf(" Digite 5 numeros\n");

//___________leituraa do vetor________________//
            for (i=0; i< 5; i++){
                scanf("%d", &elem[i]);
            }
//-----------------------chama a função----------------------------//
 nummax(elem);
 nummin(elem);
//------------------- imprimir valores------------------------//


//---------------fimimprimi-----------------------------//
  return 0;
}

//---------------função maior-------------------------------//
int nummax(int *x){

  int maior, i;
  maior = x[0];

          for (i=0; i< 5; i++){
            if (maior < x[i]){
             maior= x[i];
            }
          }
         printf("%d maior\n", maior );
return 0;
}

//----------------fução menor--------------------//
int nummin(int *x){
  int menor=100, i;
  menor = x[0];



      for (i=0; i< 5; i++){
        if (menor > x[i]){
            menor = x[i];
        }
      }
          printf("%d menor \n", menor );

return 0 ;
}
