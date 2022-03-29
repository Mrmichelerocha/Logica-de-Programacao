//Produto escalar

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int u[100], v[100], w[100];
    int i, n;

    printf("Digite um numero n<100");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf ("%d", &u[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i=0;i <n; i++)
    {
        w[i] = v[i] * u[i];
    }

    printf("w \n");
    for(i=0; i<n; i++){
        printf("%d\n", w[i]);
    }
    return 0;
}
