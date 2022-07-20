/*Exercício 10 - Criar em linguagem C e utilizando o
comando WHILE e / ou DO WHILE aninhado, um programa 
conforme imagem abaixo.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");

    int linha = 1, simbolo = 1;

    while( linha <= 8 ){
        while( simbolo <= linha){
            printf("*");
            simbolo++;
        }
        simbolo = 1;
        linha++;
        printf("\n");
    }
}