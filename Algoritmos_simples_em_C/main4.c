#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero inteiro qualquer\n");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("O numero %d e par\n",x);
    }
    else
    {
        printf("O numero %d e impar\n",x);
    }

    return 0;
}
