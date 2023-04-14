#include <stdio.h>
#include <stdlib.h>


void imprimevetor (int a[], int n)
{


int i;
for (i=0; i<n; i++)
    printf("x[%d] = %d\n",i,a[i]);

}

int main()
{
    int x[4], i;
    for (i=0; i<4; i++){
        printf("Digite o %d elemento do vetor\n", i+1);
        scanf("%d", &x[i]);
    }
    imprimevetor(x,4);
    return 0;
}

