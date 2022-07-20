/*Exercício 03 - Criar um programa (CALCULADORA ) em linguagem C que 
calcule as quatro operações básicas ( + , - , / e * ).*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, valor_01, valor_02, continuar;


    while(continuar != 2) {
        printf("%d", continuar);

        printf("\n\tCALCULADORA\t\n");
        printf("---------------------------\n");
        printf("1 - SOMA\n");
        printf("2 - SUBTRA��O\n");
        printf("3 - MULTIPLICA��O\n");
        printf("4 - DIVIS�O\n");
        printf("---------------------------\n");
        printf("Digite uma op��o: ");
        scanf("%d", &opcao);
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &valor_01);
        printf("\nDigite o segundo valor: ");
        scanf("%d", &valor_02);

        if(opcao == 1) {
            int resultado = valor_01 + valor_02;
            printf("\nA soma entre os n�meros � igual a %d", resultado);

        } else if(opcao == 2) {
            int resultado = valor_01 - valor_02;
            printf("\nA subtra��o entre os n�meros � igual a %d", resultado);

        }else if(opcao == 3) {
            int resultado = valor_01 * valor_02;
            printf("\nA multiplica��o entre os n�meros � igual a %d", resultado);

        }else if(opcao == 4) {
            int resultado = valor_01 / valor_02;
            printf("\nA divis�o entre os n�meros � igual a %d", resultado);
        }
    printf("\n[1-Voltar ao menu / 2- Sair] ");
    scanf("%d", continuar);

    }

    return 0;
}
