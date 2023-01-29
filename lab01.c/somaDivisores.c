/*
*Arquivo: somaDivisores.c
*Data de criação: 19/dez/2022
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

int main()
{
    int i, num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 1)
    {
        printf("Opcao invalida!");
    }

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }

    printf("%d", soma);

    return 0;
}