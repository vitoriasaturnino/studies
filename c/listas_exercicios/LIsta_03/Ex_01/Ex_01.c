/*Exerc�cio 01 - Criar um programa em linguagem C que imprima 
os números de 0 a 100 com o intervalo de 0,5 segundos.*/

#include <stdio.h>

void main() {

    int contador = 0;

    for (contador = 0; contador <= 100; contador++) {
        printf("%d\n", contador);

        sleep(0,5);
    }
}
