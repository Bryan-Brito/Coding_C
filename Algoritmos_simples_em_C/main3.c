#include <stdio.h>
#include <stdlib.h>


void imprimevetor (int a[], int n)
{


int i;
for (i=0; i<n; i++)
    printf (“x[%d] = %d”,i,a[i]);

}

int main()
{
    int x[4] = {1,2,3,4};
    imprimevetor (x,4);
    return 0;

    return 0;
}
