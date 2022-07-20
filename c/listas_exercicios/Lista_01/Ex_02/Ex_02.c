/*Exerc´cio 02 - Criar um programa em linguagem
C que resolva a fórmula de Bháskara.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, delta, X1, X2;

    printf("\tF�RMULA DE BHASKARA\t");
    printf("\n-----------------------------------\n");
    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de b: ");
    scanf("%f", &b);
    printf("Insira o valor de c: ");
    scanf("%f", &c);

    delta = ((b * b) - (4 * a * c));
    X1 = (-b + sqrt(delta)) / (2 * a);
    X1 = (-b - sqrt(delta)) / (2 * a);

    printf("\nX1 = %.2f", X1);
    printf("\nX2 = %.2f", X2);
    printf("\n-----------------------------------\n\n");

    system("pause");
    return 0;
}
