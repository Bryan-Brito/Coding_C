#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[8], b[5], c[13], i;

    for (i=0; i<8; i++)
    {

        printf("Digite o %d elemento do vetor a:\n",i+1);
        scanf("%d", &a[i]);
        printf("Digite o %d elemento do vetor b:\n",i+1);
        scanf("%d", &b[i]);


        c[i] = a[i] + b[i];


    for (i=0; i<8; i++)
       printf("Posicao %d do vetor a: o valor e: %d\n", i+1,a[i]);

     for (i=0; i<5; i++)
       printf("Posicao %d do vetor b: o valor e: %d\n", i+1,b[i]);
        printf("Posicao %d do vetor c: o valor e: %d\n", i+1,c[i]);




    }
        return 0;

    }
