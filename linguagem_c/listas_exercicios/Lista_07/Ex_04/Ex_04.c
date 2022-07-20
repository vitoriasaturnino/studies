/*Exercício 04 - Criar um programa que defina e exibe 
valores e endereços dos ponteiros na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float *ponteiro;

    float vetor[4]={1.1,2.2,3.3,4.4,5.5};
    int cont;
    ponteiro = vetor;
    
    //for para passar por todas as posições do vetor
    for(cont = 0; cont <= 4; cont++){
        printf("\n-Passo = %d", cont);
        printf("\n-Valor vetor[%d] = %.1f",cont, vetor[cont]);
        printf("\n-Valor do ponteiro *(ponteiro + %d) = %.1f",cont, *(ponteiro+cont));
        printf("\n-Endereço de &vetor[%d] = %.X", cont, &vetor[cont]);
        printf("\n-Endereço de (ponteiro + %d) = %.X", cont, ponteiro+cont);
        printf("\n\n");
    }
    return 0;
}
