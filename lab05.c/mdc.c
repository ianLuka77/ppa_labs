/*
*Arquivo: mdc.c
*Data de criação: 24/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdio.h>

int mdc(int a, int b) {
  int resto;
  while (b != 0) {
    resto = a % b;
    a = b;
    b = resto;
  }
  return a;
}

int main() {
  int a, b;
  printf("Insira o primeiro número: ");
  scanf("%d", &a);
  printf("Insira o segundo número: ");
  scanf("%d", &b);
  printf("O máximo divisor comum é %d\n", mdc(a, b));
  return 0;
}

