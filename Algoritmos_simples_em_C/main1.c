#include <stdio.h>
#include <stdlib.h>



//global � o que est� fora da fun��o
//acess�vel a todas fun��es do programa, exceto quando h� sobreposi��o
//local � que est� dentro da fun��o

int v = 0;
void f1(void)
{
    v++;
    printf("f1: v = %d\n", v);
}
void f2(void)
{
    v+=2;
    printf("f2: v = %d\n", v);
}



int main(void)
{
    f1();
    f2();
    f1();

    return 0;
}
