/*Exerc�cio 06 - Criar um programa em linguagem C que 
imprima a tabela ASCII utilizando o comando FOR.*/

#include <stdio.h>

void main(){

    int i;

    for(i = 0; i < 256; i++){
        printf("%d %c\n", i, i);
    }
}
