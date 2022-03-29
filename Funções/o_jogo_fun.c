
/*Jogo “Adivinhe o número”: jogador deve adivinhar um número gerado de
forma aleatória.
• O jogador pode ter mais de uma tentativa para acertar o número.
• O jogador pode receber uma dica indicando se o número correto é
maior ou menor do que o seu palpite.
• Criar diferentes níveis de dificuldade variando o intervalo de
números e a quantidade de tentativas permitidas para acertar o
número.*/


#include <stdio.h>
#include <stdlib.h>

#define cor_programa "color 50"
#define limpa_tela "cls"

int sorteia_valor(int *valor);
void mostra_tentativas(int mostrar);
int pergunta_usuario(int *numero);
void maior_menor(int ma_me);

int valor_sorteado,tentativas[1000],indice=-1,cont=0; //variaveis globais

void boas_vindas(){
printf(" __________________________________________________________\n");
printf("| \n");
printf("| OLA!!!!!!!!!!!!!!!\n");
printf("| \n");
printf("| vamos ao jogo\n");
printf("| \n");
printf("| o objetivo deste jogo eh acertar um numero entre |\n");
printf("| 1 e 100 no menor numero de tentativas |\n");
printf("| \n");
printf("| ATENCAO O PROGRAMA DIZ SE SUA TENTATIVA |\n");
printf("| E MAIOR OU MENOR QUE A RESPOSTA |\n");
printf("| \n");
printf("|__________________________________________________________|\n");
getch();
system(limpa_tela);
}

int main()
{
system(cor_programa);

boas_vindas();

sorteia_valor(&valor_sorteado);


do{
system(limpa_tela);

for(cont=0;cont<=indice;cont++)
    mostra_tentativas(tentativas[cont]);
indice ++;

pergunta_usuario(&tentativas[indice]);

maior_menor(tentativas[indice]);

}while(tentativas[indice] != valor_sorteado);

system(limpa_tela);

printf("\n\n\n Parabens vc acertou em %d tentativas!!!",indice+1);

}

int sorteia_valor(int *valor){
    *valor = (rand()%100);
}

void mostra_tentativas(int mostrar){
    printf("%d\t",mostrar);
}

int pergunta_usuario(int *numero){
    printf("\n\n\n\n Informe uma tentativa: ");
      scanf("%d",&*numero);
}

void maior_menor(int ma_me){
  printf("\n\n ");

if(ma_me > valor_sorteado){
    printf("A sua tentativa eh maior eh o numero sorteado");
      sleep(2);
}

if(ma_me < valor_sorteado){
    printf("A sua tentativa eh menor eh o numero sorteado");
      sleep(2);
}

}
