/*Exerc�cio 08 - Criar em programa (CALCULADORA) em linguagem C,
utilizando FUNÇÃO, em que calcule as quatro operações básicas. */

#include <stdio.h>
#include <locale.h>

    int adicao(valor_01, valor_02){
        return printf("%d\n", (valor_01 + valor_02));
    }

    int subtracao(valor_01, valor_02){
        return printf("%d\n", (valor_01 - valor_02));
    }

    int multiplicacao(valor_01, valor_02){
        return printf("%d\n", (valor_01 * valor_02));
    }

    int divisao(valor_01, valor_02){
       return printf("%d\n", (valor_01 / valor_02));
    }

void main() {
    setlocale(LC_ALL, "Portuguese");

    int operacao, valor_01, valor_02, resultado;

    printf("\n\tCALCULADORA\t\n");
    printf("\nEscolha uma op��o:");
    printf("\n\n1 - Adi��o");
    printf("\n2 - Subtra��o");
    printf("\n3 - Multiplica��o");
    printf("\n4 - Divis�o");
    printf("\n\nDigite o c�digo da opera��o: ");
    scanf("%d", &operacao);

    //valores a serem processados
    printf("Insira o primeiro n�mero: ");
    scanf("%d", &valor_01);
    printf("Insira o segundo n�mero: ");
    scanf("%d", &valor_02);

    printf("\nResultado = ");

    switch(operacao) {
        //adicao
        case 1 :
           adicao(valor_01, valor_02);
        break;
        //subtracao
        case 2 :
            subtracao(valor_01, valor_02);
        break;
        //multiplicacao
        case 3 :
            multiplicacao(valor_01, valor_02);
        break;
        //divisao
        case 4 :
            divisao(valor_01, valor_02);
        break;
    }
}
