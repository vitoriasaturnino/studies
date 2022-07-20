/*Exercício 02 - Faça um programa que leia os elementos de uma matriz inteira
de 4 x 4 e imprimir os elementos da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linha,  coluna,  tabela;
    int mat_entrada[4][4];

    for(linha = 0; linha <= 3; linha++){
        for(coluna = 0; coluna <= 3; coluna++){
            printf("Insira o elemento da linhaha %d,  colunauna %d da matriz: ", linha+1, coluna+1);
            scanf("%d", &mat_entrada[linha][coluna]);
        }
    }
    printf("\n\nMATRIZ:\n");

    for(linha = 0; linha <= 3; linha++){
        for(coluna = 0; coluna <= 3; coluna++)
            printf("%d  ", mat_entrada[linha][coluna]);
            printf("\n");
        }
    printf("\n\nDIAGONAL PRINCIPAL:\n");

    for(linha = 0; linha <= 3; linha++){
        printf("%d\n", mat_entrada[linha][linha]);

        for(tabela = 1; tabela <= linha + 1; tabela++)
            printf("   ");
        }

    printf("\n\n");
    system("pause");
}
