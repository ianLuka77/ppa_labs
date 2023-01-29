/*
*Arquivo: somaSeqHailst.c
*Data de criação: 22/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

int main() {
  int n, current = 0, sum = 1;

  printf("Digite um numero: ");
  scanf("%d", &n);

  while (n != 1) {
    current = n;
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    sum += current;
  }

  printf("A soma dos numeros da sequencia e: %d", sum);
  return 0;
}