//Baskara

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

 float a, b, c, x1, x2, delta;
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0){
        printf("Impossivel calcular");
    }
    else {
    delta = b*b - 4*a*c;
    if(delta < 0) {
        printf("Raizes complexas");
 }
    else {
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);
 printf("r1 =  %f", x1);
 printf(" r2 =  %f", x2);
     }
    }
return (0);
}
