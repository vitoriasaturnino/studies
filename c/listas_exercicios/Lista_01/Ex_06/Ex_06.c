/*Exercício 06 - Criar um programa em linguagem C que 
faça a conversão de 4 bits (NIBLE) em um numero decimal.*/

#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
 
int main()
{   setlocale(LC_ALL,"Portuguese");
 
    int binario, decimal = 0, i;
 
    printf("\t CONVERTENDO BINÁRIO P/ DECIMAL\t");
    printf("\n------------------------------------------------\n");
    printf("Digite o valor em Binario: \t");
    scanf_s("%d", &binario);
    for (i = 0; binario > 0; i++)
    {
        decimal = decimal + pow(2, i) * (binario % 10);
        binario = binario / 10;
    }
    printf("\nDecimal equivalente ao Valor Binario: %d\n", decimal);
    printf("\n------------------------------------------------\n");
 
    return 0;
}