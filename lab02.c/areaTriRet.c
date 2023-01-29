/*
*Arquivo: areaTriRet.c
*Data de criação: 12/dez/2022
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>
#include <math.h>

int main()
{

    float xA, yA, xB, yB, xC, yC, base, altura, resultado;

    printf ("digite os valores para xA e yA ");
    scanf("%f %f", &xA, &yA);

    printf ("digite os valores para xB e yB ");
    scanf("%f %f", &xB, &yB);


    xC = xB;
    yC = yA;
    base =  xB - xA;
    altura = yB - yA;
    resultado = (base * altura)/ 2;
    
    printf ("os valores de c sao: (%g, %g)", xC, yC);
    printf ("\no valor da area eh %g", resultado );

}