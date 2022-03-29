//soma dos numeros 

#include <stdio.h>
#include <stdlib.h>


int sum( int *a);

int main() {

int b[5],i,suma;

for (size_t i = 0; i < 5; i++) {
  printf("digite numeros\n" );
  scanf("%d", &b );
}

suma=sum(b);
  printf("%d", sum );
  return 0;
}

int sum(int *a){
int i, soma;

for (size_t i = 0; i < 5; i++) {
  soma= soma +a;
}

  return sum;
}
