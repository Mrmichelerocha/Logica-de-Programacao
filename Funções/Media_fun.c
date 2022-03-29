//Media dos numeros


#include <stdio.h>
#include <stdlib.h>

float medi(int med, float *not);

int main(void) {

float media;
int not[5],i;

/*leitura notas*/
      for (size_t i = 0; i < 5; i++) {
          printf("escreva 5 notas\n" );
            scanf("%d", &not[i] );
      }
/*chamada funçã0*/
          media = medi(5, not);
          printf(" essa é a media %d", media );

  return 0;
}

float medi( int med, float *not) {

  int  i , cont=5 , sum=0;
  float media;


  for (size_t i = 0; i < 5; i++) {
    sum=+not[i];
  }
      media=sum/5;

  return media;
}
