/*
*Arquivo: somaGauss.c
*Data de criação: 18/dez/2022
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

int main()
{
    int i, n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Opcao invalida!");
    }

    for (i = 1; i <= n; i++)
    {
        soma += i;
    }

    for (i = 1; i <= n; i++)
    {
        printf(" %d |", i);
    }

    printf("\nA soma eh: %d\n", soma);

    return 0;
}
