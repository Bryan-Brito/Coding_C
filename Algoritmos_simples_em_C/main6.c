#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{


    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], l, c, nlinhas, ncolunas;

    printf("informe o numero de linhas da matriz\n");
    scanf("%d", &nlinhas);
    printf("informe o numero de colunas da matriz\n");
    scanf("%d", &ncolunas);


    if (nlinhas<=MAX && ncolunas<=MAX){

        printf("Preenchendo a matriz A\n");
        for (l=0; l<nlinhas; l++){
         for (c=0; c<ncolunas; c++){
         printf("digite o elemento [%d][%d] da matriz\n", l+1, c+1);
         scanf("%d", &a[l][c]);


        }
    }

     printf("Preenchendo a matriz B\n");
        for (l=0; l<nlinhas; l++){
         for (c=0; c<ncolunas; c++){
         printf("digite o elemento [%d][%d] da matriz\n", l+1, c+1);
         scanf("%d", &b[l][c]);


        }
    }

    printf("Preenchendo a matriz C\n");
        for (l=0; l<nlinhas; l++){
         for (c=0; c<ncolunas; c++){
         c[l][c] = a[l][c] + b[l][c];
         printf("\t%d", c[l][c]);

        }
        printf("\n");
    }





    }


    return 0;
}
