/*Exerc�cio 07 - Criar um programa em linguagem C que imprima
uma tabuada do 1 a 10 conforme entrada do usuário, com o 
intervalo de 0,5 segundos utilizando o comando FOR.*/

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int i, mult, produto;

    printf("Digite o n�mero para ver sua tabu�da: ");
    scanf("%d", &mult);

    for (i = 1; i <= 10; i++) {
        produto = i * mult;
        printf("\n%d x %d = %d", i, mult, produto);
    }

    printf("\n");
}
