/*
*Arquivo: diferenças.c
*Data de criação: 27/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>
#include <stdlib.h>

void preenche_vetor_diferencas(int n, float *vetorA, float *vetorB) {
    int i;
    float max = -999999, min = 999999;
    for (i = 0; i < n - 1; i++) {
        vetorB[i] = vetorA[i + 1] - vetorA[i];
        if (vetorB[i] > max) {
            max = vetorB[i];
        }
        if (vetorB[i] < min) {
            min = vetorB[i];
        }
    }
    printf("Minimo: %f\n", min);
    printf("Maximo: %f\n", max);
}

int main() {
    int n, i;
    float *vetorA, *vetorB;

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    vetorA = (float*) malloc(n * sizeof(float));
    vetorB = (float*) malloc((n - 1) * sizeof(float));

    for (i = 0; i < n; i++) {
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f", &vetorA[i]);
    }

    preenche_vetor_diferencas(n, vetorA, vetorB);

    free(vetorA);
    free(vetorB);
    return 0;
}
