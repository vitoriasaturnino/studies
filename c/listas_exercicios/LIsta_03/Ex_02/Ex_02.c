/*Exerc�cio 02 - Criar um programa em linguagem C que imprima
 os números de 100 a 0 com o intervalo de 0,5 segundos.*/

#include <stdio.h>

void main() {

    int contador = 100;

    for (contador = 100; contador >= 0; contador--) {
        printf("%d\n", contador);

        sleep(0,5);
    }
}
