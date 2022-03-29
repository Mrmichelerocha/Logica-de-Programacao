/*criar um vetor com 7 elementos
• achar o maior e sua respectiva posição
• achar o menor elemento e sua respectiva posição*/


#include <stdio.h>
#include <stdlib.h>

int main() {

  int elem[5], maior=0, i, menor=100, posi=0, posi2=0;


printf(" Digite 5 numeros\n");

//___________leituraa do vetor________________//
        for (i=0; i<= 5; i++){
            scanf("%d", &elem[i]);
}
//___________codigo para imprimir o maior ____________//

 maior = elem[0];
 menor = elem[0];
          for (i=0; i<= 5; i++){

           if (maior < elem[i]){

            maior= elem[i];
            posi = i;
//________________codigo pra imprimir o menor_________//

           }
           if (menor > elem[i]){

            menor = elem[i];
            posi2 = i;

                }
          }
//_____________ impressão dos resultados ____________//
printf("Elem[%d]        menor:%d\n", posi2, menor);
printf("Elem[%d]         maior:%d\n", posi, maior);




  return 0;
}
