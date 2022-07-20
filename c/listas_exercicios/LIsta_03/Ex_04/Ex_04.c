/*Exerc�cio 04 - Criar um programa em linguagem C que imprima o alfabeto de Z a A com o intervalo de 0,5 segundos.*/

#include <stdio.h>

void main() {

    char z;

    for (z = 'Z'; z != 'A'; z--) {
        printf("%c ", z);

        sleep(0,5);
    }
    printf("A\n");
}

