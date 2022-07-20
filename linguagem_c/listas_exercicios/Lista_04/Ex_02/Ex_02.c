/*Exercíco 02 - Criar em linguagem C e utilizando o comando WHILE,
um programa que imprima na tela os números de 0 a 100 em um intervalo
de um décimo de segundo*/

#include <stdio.h>

int main(void){
    int contador = 0;

    while (contador <= 100){
        printf("%d \n", contador);
        usleep(0100);

        contador ++;
    }
}