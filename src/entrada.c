#include <stdio.h>

int ler_inteiro(void)
{
    int valor;

    while (scanf("%d", &valor) != 1)
    {
        printf("Entrada invalida. Digite um numero: ");

        while (getchar() != '\n')
        {
            /* Limpa a entrada invalida */
        }
    }

    return valor;
}

int ler_inteiro_nao_negativo(void)
{
    int valor;

    do
    {
        valor = ler_inteiro();

        if (valor < 0)
        {
            printf("O valor nao pode ser negativo. Digite novamente: ");
        }

    } while (valor < 0);

    return valor;
}