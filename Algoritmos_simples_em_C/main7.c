#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a[10];
    int i;

    for (i=0; i<10; i++){

        printf("Digite o %d elemento do vetor\n",i+1);
        scanf("%f", &a[i]);
    }

     for (i=0; i<10; i++){
        printf("Posicao %d do vetor tem o valor %f\n", i+1,a[i]);
    }






    return 0;
}
