/*
*Arquivo: imc.c
*Data de criação: 19/dez/2022
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

int main()
{

    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura ");
    scanf("%f", &altura);

    altura = altura * altura;
    imc = peso / altura;

    if (imc <= 16)
    {
        printf("(Perigo de vida)");
    }

    else if (imc >= 16, 1 && imc <= 17)
    {
        printf("(Muito abaixo do Peso) ");
    }

    else if (imc >= 17 && imc <= 18.5)
    {
        printf("(Abaixo do Peso) ");
    }

    else if (imc >= 18.6 && imc <= 24.9)
    {
        printf("(peso normal) ");
    }

    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("(acima do peso) ");
    }

    else if (imc >= 30 && imc <= 34.9)
    {
        printf("%d (Obesidade Grau I) ");
    }

    else if (imc > 35 && imc <= 39.9)
    {
        printf("(Obesidade Grau II) ");
    }

    else
    {
        printf("(Obesidade Grau III)");
    }

    return (0);
}