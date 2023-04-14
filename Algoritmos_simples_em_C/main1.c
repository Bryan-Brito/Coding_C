#include <stdio.h>
#include <stdlib.h>



//global é o que está fora da função
//acessível a todas funções do programa, exceto quando há sobreposição
//local é que está dentro da função

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
