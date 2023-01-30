/*
*Arquivo: txtfibonacci.c
*Data de criação: 29/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long int n, a[100];
    printf("Enter number of elements: ");
    scanf("%llu", &n);
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++)
        a[i] = a[i-1] + a[i-2];
    printf("The last number found is %llu\n", a[n-1]);
    FILE *fptr;
    fptr = fopen("fibonacci.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
        fprintf(fptr, "%llu\n", a[i]);
    fclose(fptr);
    return 0;
}
