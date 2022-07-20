/*Exercíco 04 - Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os Nomes.*/

#include<stdio.h>
#include <string.h>

int main(void){
    char nome[3][20];
    int i;

    for(i = 0; i <= 2; i++){
        printf("\n[%d] Digite o %d nome: ", i, (i+1));
        gets(nome[i]);
    }

    for(i = 0; i <= 2; i++){
        printf("\nO NOME %s tem %d letras!", nome[i], strlen(nome[i]));
    }

    printf("\n\n");
    system("pause");
}
