#include <stdio.h>

int main()
{
    int a, b, soma, subtra, multi, div, resto;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    soma = a + b;
    subtra = a - b;
    multi = a * b;
    div = a / b;
    resto = a % b;

    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d", a, b, soma, a, b, subtra, a, b, multi, a, b, div, a, b, resto);

    return 0;
}