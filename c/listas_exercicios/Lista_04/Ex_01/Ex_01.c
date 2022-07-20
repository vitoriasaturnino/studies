/*Exercíco 01 - Criar em linguagem C e utilizando o comando WHILE, 
um programa que imprima na tela os números de 100
a 0 em um intervalo de um décimo de segundo */

#include <stdio.h>

int main(void){
    int contador = 100;

    while (contador >= 0){
        printf("%d \n", contador);
        usleep(0100);

        contador --;
    }
}
