/*Exercício 09 - Criar em programa em linguagem C, utilizando FUNÇÃO, 
que converta de BIN/DEC e DEC/BIN.*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int converterBin2Dec(long long valor_binario);
long long converterDec2Bin(int valor_decimal);
int converterDec2Oct(int valor_decimal);
long long converterOct2Dec(int valor_octal);

int main()
{
    char opc = ' ';
    long long valor_binario;
    int valor_decimal, cociente;
    int sequencial, valor_temp, tamanho_string;

    while (opc != '0') {

        printf("\n----------------------\n");
        printf("Digite a Opcao\n");
        printf("1 - Binario para Decimal\n");
        printf("2 - Decimal para Binario\n");
        printf("0 - Sair\n");
        printf("Resposta: ");
        scanf("%c", &opc);
        getchar();

        if (opc == '1') {
            printf("Digite numero binario: ");
            scanf("%lld", &valor_binario);
            printf("[%lld] em binario = [%d] em decimal\n", valor_binario, converterBin2Dec(valor_binario));
        }

        else if (opc == '2') {
            printf("Digite o numero decimal: ");
            scanf("%d", &valor_decimal);
            printf("[%d] em decimal = [%lld] em binario\n", valor_decimal, converterDec2Bin(valor_decimal));
        }

        else {
            printf("Opcao desconhecida [%c]\n", opc);
        }
    }

    return 0;
}

int converterBin2Dec(long long valor_binario)
{
    int valor_decimal = 0, sequencial = 0, resto;

    while (valor_binario != 0)
    {
        resto = valor_binario % 10;

        valor_binario /= 10;

        valor_decimal += resto * pow(2, sequencial);

        ++sequencial;
    }

    return valor_decimal;
}

long long converterDec2Bin(int valor_decimal)
{
    long long valor_binario = 0;
    int resto, sequencial = 1;

    while (valor_decimal != 0)
    {

        resto = valor_decimal % 2;

        valor_decimal /= 2;

        valor_binario += resto * sequencial;

        sequencial *= 10;
    }

    return valor_binario;
}
