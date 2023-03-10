/*
*Arquivo: somatorio.c
*Data de criação: 11/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

float soma(float * vetor, int tamanho);

int main(void) {
    int n;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n]; // específico do C99
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    printf("%g ", vetor[0]);
    for(int i = 1; i < n; i++)
        printf("+ %g ", vetor[i]);
    printf("= %g\n", soma(vetor, n));
    return 0;
}

float soma(float * vetor, int tamanho) {
    float s = 0;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    return s;
}