#include <stdio.h>
#include <stdlib.h>

//Fun��o que imprimi uma mensagem de boas vindas
void boasvindas(void);

//fun��o que imprimi a idade do usuario
void imprimiridade (int i);


int main()
{
    int idade;
    boasvindas();
    printf("Querido usuario, por favor digite a sua idade\n");
    scanf("%d", &idade);
    imprimiridade(idade);
    return 0;
}

void boasvindas(void)
{
    printf("Bem vindo ao meu programa\n");

}


void imprimiridade (int i)
{
    printf("Voce tem %d anos\n", i);
}
