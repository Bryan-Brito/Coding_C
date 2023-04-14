#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero inteiro qualquer\n");
    scanf("%d",&x);
    if ((x==0) || (x==10))
    {
        printf("O numero digitado e = a 0 ou = 10\n",x);
    }
    return 0;
}
