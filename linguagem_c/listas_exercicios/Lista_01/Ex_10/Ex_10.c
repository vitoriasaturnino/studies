/*Exercício 10 - Uma pizzaria de São Paulo inventou uma nova modalidade de
pizza, chamada de “Meia Pizza da Casa”. O cliente escolhe o raio da pizza e o pizzaiolo faz uma meia pizza de calabresa com essa medida de raio. Crie um programa para ajudar o pizzaiolo a calcular a área da “Meia Pizza da Casa” 
baseada na medida do raio escolhida pelo cliente.*/

#include <stdio.h>
#include <locale.h>]

void main() {
    setlocale(LC_ALL, "Portuguese");

    float raio;

    printf("\n\tMEIA PIZZA\t");
    printf("\n--------------------------\n");
    printf("Qual o raio da pizza? ");
    scanf("%f", &raio);

    float area =  3.14 * (raio * raio);
    float meia_pizza = area / 2;

    printf("A �rea da Meia Pizza da casa para esse raio seria igual %.2f", meia_pizza);
    printf("\n--------------------------\n");
}
