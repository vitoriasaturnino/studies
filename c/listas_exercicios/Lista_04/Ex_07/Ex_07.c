/*Exercío 07 - Criar em linguagem C e utilizando o comando
 DO WHILE, um programa que imprima uma contagem regressiva
do numero que você digitar.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int cont;

    printf("digite um número: ");
    scanf("%d \n", &cont);

    do{
        printf("%d", cont);

        cont--;
    }while (cont>=0);

    printf("\n");
}

