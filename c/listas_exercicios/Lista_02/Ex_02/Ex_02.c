/*Exercício 02 - Criar um programa em linguagem C que 
identifique se o numero é +, - ou NULO.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("\n\tPOSITIVO, NEGATIVO OU NULO\t\n");
    printf("------------------------------------------\n");
    printf("Digite um n�mero: ");
    scanf("%d", &valor);

    if(valor > 0) {
        printf("\nO n�mero digitado � POSITIVO\n");
    } else if (valor == 0) {
        printf("\nO n�mero digitado � NULO\n");
    } else if (valor < 0) {
        printf("\nO n�mero digitado � NEGATIVO\n");
    }

    printf("------------------------------------------\n");
    return 0;
}
