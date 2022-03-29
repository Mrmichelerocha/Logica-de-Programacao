//Escreva um algoritmo que receba uma frase e verifique se é um palindromo.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){

    char v[100], u[100];
    int i, j, p=1;
    scanf("%[^\n]", v);


    /* char c;

    for (c=32;c<127;c++){
        printf("codigo %d - caracter %c\n", c, c);
    } */


    j=0;
    i=0;

    while(v[i]!='\0'){
        if(v[i]>='a'&& v[i]<='z'){
            u[j]=v[i];
            j++;
        }
        i++;
    }

    u[j]='\0';
     printf("%s\n", u);
    i=j;

    for(j=0; j<i && p==1; j++){
        if(u[j] !=u[i-1]){
            p=0;
        }
            i=i-1;
    }

   if(p==1){
        printf("sim");
    }

        else{
            printf("nao");
    }

    return (0);

}
