#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10], i, numero;

      for (i=0; i<10; i++){

        printf("Digite o %d elemento do vetor a:\n",i+1);
        scanf("%d", &a[i]);
         printf("Digite um %d elemento a ser pesquisado do vetor a:\n",i+1);
         scanf("%d", &numero)
        if (numero == a[i] ){
            printf("O numero esta cadastrado no vetor\n");
        } else{
            printf("O numero nao esta cadastrado no vetor\n");
        }
      }


    for (i=0; i<10; i++)
       printf("Posicao %d do vetor a: o valor e: %d\n", i+1,a[i]);
       printf("O numero esta cadastrado no vetor 2\n",i+1,a[i]);




    return 0;
}
