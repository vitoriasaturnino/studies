/*Eercíco 08 - Criar em linguagem C e utilizando o comando 
DO WHILE, um programa que identifique se um número é PAR,
IMPAR e 0 para sair.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int valor_1, resp;;

    do{
        printf("Digite um número: ");
        scanf("%d", &valor_1);

        if (valor_1 % 2 == 0){
            printf("O valor digitado é PAR!\n");

        }else{
            printf("O valor digitado é um número ÍMPAR!\n");
        }

        printf("Para sair aperte o zero: ");
        scanf("%d", &resp);
    }while(resp != 0);

    printf("\n");
}