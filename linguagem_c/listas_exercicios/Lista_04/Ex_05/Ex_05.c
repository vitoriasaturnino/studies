/*Exercício 05 - Criar em linguagem C utilizando o comando WHILE, 
um programa que imprima uma palavra infinitamente, até que uma tecla
seja pressionada*/

#include <stdio.h> 
#include <conio.h> 

int main(void){ 

    while(!kbhit()){ 

        printf("ZERO "); 

    } 
} 