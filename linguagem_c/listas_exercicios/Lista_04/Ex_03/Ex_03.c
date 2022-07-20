/*Exerício 03 - Criar em linguagem C e utilizando o comando WHILE,
um programa que imprima as letras de A a Z em um intervalo de um 
décimo de segundo.*/

#include <stdio.h>

int main(void){
    char a = 'A';

    while(a != 'Z'){
        printf("%c\n", a);
        usleep(0100);

        a ++;
    }
    printf("Z");
}
