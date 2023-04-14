#include <stdio.h>
#include <stdlib.h>


float calcularmedia (float n1, float n2);

void compararmedias (float m1, float m2);




int main()
{
    float n1, n2, media1, media2;
    boasvindas();

    printf("Digite as duas notas do aluno 1\n");
    scanf("%f%f", &n1, &n2);
    media1 = calcularmedia(n1, n2);
    printf("Media aluno 1: %.2f\n", media1);

    printf("Digite as duas notas do aluno 2\n");
    scanf("%f%f", &n1, &n2);
    media2 = calcularmedia(n1, n2);
    printf("Media aluno 2: %.2f\n", media2);

    compararmedias(media1, media2);



    return 0;
}

void boasvindas(void)
{
    printf("Bem vindo ao meu programa\n");

}

float calcularmedia (float n1, float n2)
{

    float media;

    media= (n1+n2)/2;


    return media;

}

void compararmedias (float m1, float m2)
{
    if (m1>m2)
        printf("Aluno 1 tem a maior media");
    else if (m2 > m1)
        printf("Aluno 2 tem a maior media");
    else
        printf("Os alunos tem a mesma media");
    return 0;


}
