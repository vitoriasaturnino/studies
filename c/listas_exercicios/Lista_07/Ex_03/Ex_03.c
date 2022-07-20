/*Exercício 03 - Criar um programa que atribua os de 
valores em variáveis para exibição na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main(void){
    //ponteiros
    int *ponteiro_1, *ponteiro_2, *ponteiro_3;
    float *ponteiro_float;
    char *nome = "AMAR!";
    char *ponteiro_char;

    //valores
    int valor, idade, vetor[3];
    float temp;
    char auxiliar;

    valor = 10;
    ponteiro_1 = &valor;
    *ponteiro_1 = 20;
    printf("1 - %d \n", valor);

    temp = 26.5;
    ponteiro_float = &temp;
    *ponteiro_float = 29.0;
    printf("2 - %.1f \n", temp);

    ponteiro_char = &nome[0];
    auxiliar = *ponteiro_char;
    printf("3 - %c \n", aux);

    ponteiro_char = &nome[1];
    auxiliar = *ponteiro_char;
    printf("4 - %c \n", aux);

    ponteiro_char = nome;
    printf("5 - %c \n", *ponteiro_char);

    ponteiro_char = ponteiro_char + 4;
    printf("6 - %c \n", *ponteiro_char);

    ponteiro_char--;
    printf("7 - %c \n", *ponteiro_char);

    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    ponteiro_2 = vetor;
    idade = *ponteiro_2;
    printf("8 - %d \n", idade);

    ponteiro_3 = ponteiro_2 + 1;
    idade = *ponteiro_3;
    printf("9 - %d \n", idade);

    ponteiro_2 = ponteiro_3 + 1;
    idade = *ponteiro_2;
    printf("10 - %d \n", idade);

    ponteiro_2 = ponteiro_2 - 2;
    idade = *ponteiro_2;
    printf("11 - %d \n", idade);

    ponteiro_3 = &vetor[2] - 1;
    printf("12 - %d \n", *ponteiro_3);
    
    ponteiro_3++;
    printf("13 - %d \n", *ponteiro_3);
}