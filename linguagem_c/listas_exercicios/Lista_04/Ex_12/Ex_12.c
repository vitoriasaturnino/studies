/*Exercíco 12 - Criar em linguagem C e utilizando o
comando WHILE ou DO WHILE, um programa que peça números
ao usuário até que a soma de todos os números digitados 
for pelo menos 20.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int valor, soma = 0;

    do{
        printf("Digite um número: ");
        scanf("%d", &valor);

        soma = valor + soma;
        printf("= %d\n", soma);

    }while(soma <= 20);

    printf("\n");
}