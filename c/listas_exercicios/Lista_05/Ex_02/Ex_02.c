/*Exercício 02 -  Preencher um vetor com 6 números e mostrá-los na tela.*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int guarda_valor[5];
    int i = 0;

    for(i = 0; i <= 5; i++){
        guarda_valor[i] = rand() % 50;
        printf(" %d \n", guarda_valor[i]);
    }
}
