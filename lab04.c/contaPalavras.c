/*
*Arquivo: contaPalavras.c
*Data de criação: 19/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>
#include <string.h>

int main() {
    char phrase[100];
    int i, len, words = 1;

    printf("Enter a phrase: ");
    scanf("%[^\n]s", phrase);
    len = strlen(phrase);

    for (i = 0; i < len; i++) {
        if (phrase[i] == ' ') {
            words++;
        }
    }

    printf("Number of words: %d\n", words);
    return 0;
}
