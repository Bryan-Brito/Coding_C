#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero inteiro qualquer\n");
    scanf("%d",&x);
    if (x>0)
    {
        if (x>200)
        {
            if (x<202)
            {
                printf("O numero digitado e 201\n\n");
            }
        }
    }
    return 0;
}
