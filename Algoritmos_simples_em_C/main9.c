#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[10], i;


    for (i=0; i<10; i++)
    {

        printf("Digite o %d elemento do vetor a:\n",i+1);
        scanf("%d", &a[i]);

    }

    for (i=0; i<10; i++)
         printf("Posicao %d do vetor a: o valor e: %d\n", i+1,a[i]);


    return 0;
}
