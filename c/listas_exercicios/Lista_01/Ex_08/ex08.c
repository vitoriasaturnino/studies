/*Exercício 08 - Criar um programa em linguagem C que receba
uma medida em pés, faça as conversões e a seguir. Mostre os resultados:
a) Polegadas; b) Jardas; c) Milhas.*/

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float pe;

    printf("\n\tCONVERS�O DE MEDIDAS\t");
    printf("\n--------------------------------------\n");
    printf("Qual a medida em p�s? ");
    scanf("%f",  &pe);

    float polegada = (pe * 12);
    float jarda = (pe * 0.33);
    float milha = (pe * 0.000189394);

    printf("\na)%.2f POLEGADAS;\n",  polegada);
    printf("b)%.2f JARDAS;\n", jarda);
    printf("c)%f.2MILHAS.", milha);
    printf("\n--------------------------------------\n");
}
