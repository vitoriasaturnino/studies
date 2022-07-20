/*Exercício 07 - Criar um programa em linguagem C que leia um número 
positivo do teclado e informar se ele é divisível por 10, por 5, por
2 ou se não é divisível.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("\n\tEXERC�CIO 08\t\n");
    printf("----------------------------\n");
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor % 10 == 0) {
        if(valor % 5 == 0) {
            if(valor % 2 == 0) {
                printf("\nO n�mero %d � divis�vel por 10, 5 e 2!", valor);
            }
        }
    }

    printf("\n----------------------------\n");
    return 0;
}
