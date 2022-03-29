//Uma palavra é um anagrama de outra se a sequência de letras de uma é uma
//permutação da sequência de letras da outra. Exemplo: "aberto" é um anagrama
//de "rebato". Digamos que duas palavras são equivalentes se uma é anagrama da outra.

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int cont=0,i,j,tam1,tam2;
   char p1[50],p2[50];

   scanf("%s", p1);
   scanf("%s", p2);
   tam1=strlen(p1);
   tam2=strlen(p2);

   if (tam1==tam2)
   {
       for(i=0;i<tam1;i++)
       {
           for(j=0;j<tam2;j++)
           {
               if(p1[i]==p2[j])
               {
                   cont++;
                   p2[j]=0;
                   break;
               }
           }
       }

   if(cont==tam1)
   {
       printf("Sao equivalentes");
   }
   else
   {
       printf("Nao sao equivalentes");
   }
}
else
{
    printf("Nao sao equivalentes");
}
   return 0;
}
