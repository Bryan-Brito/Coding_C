#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[8], b[8], i;


    for (i=0; i<8; i++)
    {

        printf("Digite o %d elemento do vetor a:\n",i+1);
        scanf("%d", &a[i]);

        b[i] = a[i]*3;

    }

    for (i=0; i<8; i++)
       printf("Posicao %d do vetor b: o valor e: %d\n", i+1,b[i]);





    return 0;
}
