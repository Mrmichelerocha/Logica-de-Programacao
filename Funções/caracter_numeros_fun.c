/*(a) Escreva uma função que receba um caracter e devolva: 0, se o caracter
for um número inteiro; 1, se o caracter for uma letra e 2, caso contrário.

(b) Usando o item anterior, escreva um algoritmo que leia uma sequência de
caracteres e imprima a sequência convertida em letras maiúsculas.*/

#include <stdio.h>
#include <stdlib.h>

void tomaiusc(char s[]) {
   int c = 0;
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}
void verchar(char s[]) {
    int c = 0;
    while (s[c] != '\0') {
        if(s[c] > '0' && s[c] <= '9'){
            s[c] = '0';
	}
        else if(s[c] >= 'A' && s[c] <= 'Z' ){
            s[c] = '1';
	}
        else{
            s[c] = '2';
	}
	c++;
}
}
int main(int argc, char *argv[]) {
    char frase[100];
	printf("Digite uma frase\n");
	scanf("%s", frase);
	tomaiusc(frase);
	printf("%s\n",frase);
	verchar(frase);
    printf("%s\n",frase);

	return 0;
}
