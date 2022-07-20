/*Exerc�cio 03 - Criar um programa em linguagem C que imprima
 o alfabeto de A a Z com o intervalo de 0,5 segundos.*/

#include <stdio.h>

void main() {

    char a;

    for (a = 'A'; a != 'Z'; a++) {
        printf("%c ", a);

        sleep(0,5);
    }
    printf("Z\n");
}
