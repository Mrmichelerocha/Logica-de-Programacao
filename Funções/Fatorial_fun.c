//fatorial função

#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int fatorial(int x);
int main() {

int n;

printf("digite um numero");
  scanf("%d", &n );

   fatorial(n);



  return 0;
}
int fatorial(int x){
  int fat;

  for(fat = 1; x > 1; x = x - 1){
      fat = fat * x;
  }

    printf("%d fatorial \n", fat );

  return 0;
}
