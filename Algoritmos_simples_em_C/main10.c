#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[12], z[12], i;

    for (i=0; i<12; i++)
    {
        printf("Digite o %d elemento do vetor x:\n",i+1);
        scanf("%d", &x[i]);

        if (x[i]% 2=0)
        {
            z[i] = x[i];
        }
        else

            z[i] =x[i] * 2;

            }
      for (i=0; i<12; i++)
            {
                printf("Posicao %d do vetor x: o valor e: %d\n", i+1,x[i]);

            }
        }
    }
    for (i=0; i<12; i++)
        printf("Posicao %d do vetor z: o valor e: %d\n", i+1,z[i]);


    return 0;
}
