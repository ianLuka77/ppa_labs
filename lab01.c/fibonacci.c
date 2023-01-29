/*
*Arquivo: fibonacci.c
*Data de criação: 11/dez/2022
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\nSerie de Fibonacci:\n\n");
    printf("%d\n", b);

    for (i = 0; i < n; i++)
    {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d, ", auxiliar);
    }

    return 0;
}