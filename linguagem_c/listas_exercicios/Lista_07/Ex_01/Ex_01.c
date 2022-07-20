/*Exercício 01 - Criar um programa que altera o valor pré 
definido pelo programa através da locação de memoria*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a = 0, *ponteiro, b;

    ponteiro=&a;
    b = *ponteiro;
    /*usar * antes do ponteiro para mostrar o valor
sem * ele me devolve o endereço na memória*/

    b = 4;
    (*ponteiro)++;
    b--;
    (*ponteiro)+=b;

    printf("a = %d \n", a);
}