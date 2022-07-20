/*Exercício 04 - Criar em linguagem C e utilizando o comando WHILE, 
um programa que imprima as letras de Z a A em um intervalo de um 7décimo de segundo.*/

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
