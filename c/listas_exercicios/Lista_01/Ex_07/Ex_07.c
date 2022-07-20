/*Exercício 07 - Criar um programa em linguagem C
que calcule o perímetro e a área de uma circunferência
de raio R (fornecido pelo usuário). */

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float raio;

    printf("\n\tCALCULO PER�METRO E �REA\t");
    printf("\n----------------------------------------\n");
    printf("Qual o raio do c�rculo? ");
    scanf("%f", &raio);

    float perimetro = ((2 * 3.14) * raio);
    float area =  (3.14 * (raio * raio));

    printf("Um c�rculo de raio = %f\n", raio);
    printf("PER�METRO= %.2f \n�REA= %.2f", perimetro, area);
    printf("\n----------------------------------------\n");
}
