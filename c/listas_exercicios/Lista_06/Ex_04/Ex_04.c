/*Exercício 04 - Faça um programa que lê uma duas matrizes de 3x3 
elementos usando um comando for, exibir os valores originais e 
depois exibir os mesmos com a raiz dos valores digitados.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int i, j;
    float num_enttrada[3][3], raiz_num[3][3];

    for (i = 0; i < 3; i++)
    {
        printf("insira tres numeros: ");
        for (j = 0; j < 3; j++)
        {
            scanf_s("%f", &num_enttrada[i][j]);
            raiz_num[i][j] = sqrt(num_enttrada[i][j]);
        }
    }
    printf("\nValores inseridos\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.0f ", num_enttrada[i][j]);
        }
    printf("\n");
    }
    printf("\nRaiz dos numeros digitados\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.0f ", raiz_num[i][j]);
        }
    printf("\n");
    }
}

