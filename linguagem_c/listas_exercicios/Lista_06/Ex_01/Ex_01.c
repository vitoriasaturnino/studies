/*Exercício 01 - Faça um programa que lê três palavras do teclado
e imprime as três palavras na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    char palavra_entrada[3][30];


    for(i = 0; i < 3; i++){
        printf("Informe palavra %d: ", i + 1);
        gets(palavra_entrada[i]);
    }

    printf("\n\tPalavras em ordem inversa\t\n\n");

    for(i = 2; i >= 0; i--){
        printf("%s\n",palavra_entrada[i]);
    }

    printf("\n");
}