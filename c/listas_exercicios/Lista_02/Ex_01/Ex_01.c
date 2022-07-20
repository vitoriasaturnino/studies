/*Exercício 01 - Criar um programa em linguagemmC que
identifique se o numero é PAR ou IMPAR.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("\n\tPAR OU �MPAR\t\n");
    printf("----------------------------\n");
    printf("Digite um n�mero: ");
    scanf("%d", &valor);

    if(valor % 2 == 0) {
        printf("\nO n�mero digitado � PAR\n");
    } else {
        printf("\nO n�mero digitado � �MPAR\n");
    }
    printf("----------------------------\n");
    return 0;
}
