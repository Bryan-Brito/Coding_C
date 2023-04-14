#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero inteiro qualquer\n");
    scanf("%d",&x);
    if ((x>0) && (x<10))
    {
        printf("O numero %d e maior que 0 e menor que 10\n",x);
    }

    return 0;
}
