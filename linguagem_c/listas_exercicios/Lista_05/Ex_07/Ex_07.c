/*Exercíco 07 - Preencher um vetor com números inteiros( 8 unidades);
solicitar um número do teclado. Pesquisar se esse número existe no vetor.
Se existir, imprimir em qual posição do vetor e qual a ordem foi digitado.
Se não existir, imprimir MSG que não existe. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int vetor[8] = {1,2,3,4,5,6,7,8}, i, auxiliar, numero;

    for(i = 0; i < 8; i++){
        vetor[i] = rand() %100;
        //printf("%d \n", vetor[i]);
    }

    printf("\ndigite um n�mero: ");
    scanf("%d", &numero);

    for(i = 0; i < 8; i++){
        if(vetor[i] == numero){
           auxiliar = vetor[i];
        }
    }
    if(auxiliar == numero){
        printf("\nO n�mero digitado existe no vetor! ", auxiliar);
    }else{
        printf("\nO numero digitado n�o existe nesse vetor :(");
    }

    printf("\n");
}
