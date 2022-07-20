/*Exercício 09 - Criar em linguagem C e utilizando o comando
SWITCH, um programa que identifique se um número é PAR ou IMPAR
e 0 para sair.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int par_impar(valor_1){
    if(valor_1 == 0){
        return 0;
    }else if(valor_1 % 2 == 0){
        return 1;
    }else{
        return 2;
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int valor_1, result;

    printf("\n------PAR ou ÍMPAR------\n");
    printf("[para sair digite 0]\n");
    printf("Digite um número: ");
    scanf("%d", &valor_1);

    switch (par_impar(valor_1))
    {
    case 0:
        exit(0);
    case 1:
        printf("O valor digitado é PAR!\n");
        break;
    case 2:
        printf("O valor digitado é ÍMPAR!");
        break;
    }

    printf("\n");
}
