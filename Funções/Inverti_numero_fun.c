/*Escreva o programa que inverta a ordem dos dígitos em um número
usando uma função recursiva.
Ex: se o número for 7631 o programa deve retornar o número 1367*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int invert(int n);

int main(){
  int n;
  //
   printf("Digite um numero:");
   scanf("%d",&n);
  //
   invert(n);
  //
   return 0;
}
  //
int invert(int n){
    if(n==0)
      return n;
     else
    {
     printf("%d", n % 10);
        n = n / 10;
     return invert(n);
    }
  }
  //
