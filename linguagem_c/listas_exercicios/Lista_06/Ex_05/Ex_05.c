/*Exercício 05 - Faça um programa que lê uma duas matrizes de 3x3 e um determinante para multiplicar esta matriz.*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int multiplic, i, j, matriz[3][3];

	for (i = 0; i < 3; i++){
		printf("Entre com 3 numeros numeros: ");
		for (j = 0; j < 3; j++){
			scanf_s("%d", &matriz[i][j]);
		}
	}
	printf("Insira o numero para multiplicar: ");
	scanf_s("%d", &multiplic);

	printf("\nValores Originais:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
    printf("\n");
	}
	
    printf("\nProduto:\n");
    for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matriz[i][j] * multiplic);
		}
    printf("\n");
	}
}
