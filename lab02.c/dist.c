/*
*Arquivo: dist.c
*Data de criação: 12/dez/2022
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>
#include <math.h>

int main()
{

    float xA, yA, xB,yB, resultado;

    printf ("digite os valores para A ");
    scanf("%f %f", &xA, &yA);
    printf ("digite os valores para B ");
    scanf("%f %f", &xB, &yB);

    resultado = sqrt((xA - xB) * (xA - xB)  + ((yA - yB) * (yA - yB)));
    printf ("%g", resultado);

}