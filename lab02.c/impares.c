/*
*Arquivo: impares.c
*Data de criação: 14/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
int menor, maior;

printf("digite dois numeros sendo o primeiro o menor: ");
scanf("%d %d", &menor, &maior);

for(int i=menor; i<= maior;++i){

	if ( i % 2 == 1)
	printf("%d, ",i);
}
}






