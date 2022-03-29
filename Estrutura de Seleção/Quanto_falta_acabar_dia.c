// Elabore um algoritmo que receba um horário em horas, minutos e segundo //
//e calcule quanto tempo falta para o dia terminar.//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  mm, ss, h, m, s, temprest;
    int minutos, segundos, horas;


    printf("pode me dizer as horas? por favor");
    scanf("%f", &h);
    printf("pode me dizer os minutos?");
    scanf("%f", &mm);
    printf("se quiser pode me dizer os segundos também");
    scanf("%f", &ss);

      m= mm/60;
    s= ss/3600;

      temprest = h+m+s;
      printf("soma %f\n", temprest);

      temprest = 24 - temprest;

      printf("restante %f\n", temprest);

      horas = temprest - m;
      printf("horas %f\n", horas);

        minutos = (temprest - horas)*60;
        printf(" minu%f\n", minutos);

        if (s>0) {
                segundos = temprest - s;
        printf("seg%f\n\n", segundos);
        }


        printf("falta %dhoras, %dminutos, %dsegundo para o seu dia acabar", horas, minutos, segundos);







    return 0;
}
