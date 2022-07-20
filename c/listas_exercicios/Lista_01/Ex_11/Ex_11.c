/*Exercício 11 - Criar um programa em linguagem C programa que Calcule o consumo 
de um veículo conforme os dados informado no teclado:Tempo em horas, velocidade média edistância*/

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float consumo, distancia, preco_litro;

    printf("\n\tGASTO COMBUST�VEL\t");
    printf("\n---------------------------------\n");
    printf("Quanto combust�vel seu carro consome por km? ");
    scanf("%f", &consumo);
    printf("Qual a dist�ncia total da viagem? ");
    scanf("%f", &distancia);
    printf("Qual o valor do litro de conbust�vel? R$");
    scanf("%f", &preco_litro);

    float gasto_combustivel = distancia * consumo;
    float valor_gasto = preco_litro * gasto_combustivel;

    printf("\npara uma viagem de %.2fkm,\nseu carro gataria em m�dia %.3f litros de combust�vel\n", distancia, gasto_combustivel);
    printf("O valor do combust�vel gasto para essa viagem seria de R$%.2f", valor_gasto);
    printf("\n---------------------------------\n");
}
