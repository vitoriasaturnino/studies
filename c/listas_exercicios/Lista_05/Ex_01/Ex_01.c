/*Exercíco 01 - aça um algorítimo que receba valores inteiros de
uma matriz 5×2 e preencha um vetorinteiro de tamanho 10. Imprima
o vetor preenchido.*/ 

#include <stdio.h>

int main(void) {

    int linha, coluna, cont, matriz[5][2], vetor[10], posicao;

    // preenche a matriz
    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 2; coluna++){
            matriz[linha][coluna] = rand() % 100;
        }
    }

    //impressao das estruturas
    //printf("\nMatriz:\n");
    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 2; coluna++){
            //printf("%2d ", matriz[linha][coluna]);
        }
        //printf("\n");
    }

    //printf("\n\n");

    // guardando valores no vetor
    for(cont = 0; cont < 1; cont++){

        for(linha = 0; linha < 5; linha++){

            for(coluna = 0; coluna < 2; coluna++){
                vetor[cont]= matriz[linha][coluna];
                printf("vetor  = %d \n", vetor[cont]);
            }
        }
    }
}
