/*Exercício 11 - Neste exercício temos dois vetores com 5 posições (0 a 4).
Em cada vetor entraremos com cinco números. Mostrar os números e depois somar números que perteçam a mesma posição ou seja: [0]+[0],[1]+[1],…*/

#include <stdio.h>

int main(void){
    int vetor_1[5], vetor_2[5], num, cont = 0, i;
    printf ("\nVetor 1:\n");

    for (i = 0; i <= 4; i ++){
        cont = 0 + i;
        printf ("\t [%d] Digite o %d valor: ", i, cont);
        scanf ("%d", &num);
        vetor_1[i] = num;
    }
    printf("\n \n");
    printf("\nVetor 2:\n");

    for (i = 0; i <= 4; i ++){
        // este contador vai mostrar em qual posicao o numero digitado esta.
        cont = 0 + i;
        printf ("\t [%d] Digite o %d valor: ", i, cont);
        scanf ("%d", &num);
        vetor_2[i] = num;
    }

    // Estefor vai mostrar os valores de vetor_1.
    printf("\nVetor 1: ");
    for(i = 0; i <= 4; i++){
        printf("\t%d", vetor_1[i]);
    }

    printf("\n");
    // Estefor vai mostrar os valores de vetor_2.
    printf ("\nVetor 2: ");

    for (i = 0; i <= 4; i++){
        printf("\t%d", vetor_2[i]);
    }

    printf("\nSoma: ");

    // Este for vai mostrar a Soma do vetor_1 + vetor_2.
    for(i = 0; i <= 4; i++){
        printf ("\t%d", vetor_1[i] + vetor_2[i]);
    }

    printf("\n\n");
    system("pause");
}

