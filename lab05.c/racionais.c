/*
*Arquivo: racionais.c
*Data de criação: 28/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

int mdc(a, b){
    while (a != b) 
        if (a > b) 
        a = a - b;
        else 
        b = b - a;
    return a;
}

int main(void){

    int p1, p2, q1, q2, s1, s2, soma;

    printf("Entre com um número racional positivo no formato x/y (e.g. 1/2): ");
    scanf("%d/%d", &p1, &q1);
    printf("Entre com outro número racional positivo no formato x/y (e.g. 1/2): ");
    scanf("%d/%d", &p2, &q2);

    //simplificar os numeros
    s1 = mdc(p1, q1);
    s2 = mdc(p2, q2);
    p1 = p1/s1;
    q1 = q1/s1;
    p2 = p2/s2;
    q2 = q2/s2;

    printf("%d, %d", s1, s2);
    printf("%d %d %d %d", p1, q1, p2, q2);

    //Soma
    soma = (p1*q2 + p2*q1)/(q1*q2);
    printf("A soma é: %d", soma);
    //Subtração

    //Multiplicacao
    //Divisao


    return 0;
}
