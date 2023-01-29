/*
*Arquivo: ContaVogais.c
*Data de criação: 19/jan/2023
*Autor: Ian Luka Simplicio Silva
*/

#include<stdio.h>
#include<string.h>
#define n 1024 //Byte

void getstr(char * str, int nchar);

int main(void){

    char msg[n];
    printf("Entre com uma mensagem: ");
    getstr(msg, n);
    printf("Você entrou com:\n%s\n", msg);
    
    return 0;
}

void getstr(char * str, int nchar){
        char aux;
        for(int i = 0; i < nchar; i++){
            aux = getchar();
            if(aux!= '\n'){
                str[i] = aux;
            }
            else{
                str[i] = '\0';
                break;
            }
        }
        str[nchar-1] = '\0';
    }
    