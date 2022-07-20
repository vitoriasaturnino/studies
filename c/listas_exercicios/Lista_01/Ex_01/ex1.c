/* Exercício 01 - Criar um programa em linguagem
C que efetue a soma de dois números dos tipo real.*/

#include <stdio.h>
#include <locale.h>

int main(){
    int valor_01 = 5, valor_02 = 8;

    setlocale(LC_ALL, "Portuguese");
    printf("   Exerc�cio 01   ");
    printf("\n------------------\n");

    int soma =  valor_01 + valor_02;

    printf("   5 + 8 =  %d", soma);
    printf("\n------------------\n");

    return 0;
}
