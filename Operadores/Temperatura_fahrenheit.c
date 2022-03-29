/*Temperatura em fahrenheit*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int temp, fah;

   printf("escreva um temperatura ");
   scanf("%d",  &temp);

     fah=(temp-32)*5/9;

   printf("essa é sua temperatura em Fahrenheit %d", fah);


    return 0;
}
