/*Exercíco 05 -  Solicitar um nome e mostrar o primeiro, o último, 
o quarto, do primeiro ao terceiro, doprimeiro ao ultimo. Mostrar 
a posição de cada letra no vetor. */

#include <stdio.h>
#include<conio.h>

int main(void){

    int i, fim;
    char nome[6]; //VIT�RIA

    printf("Digite seu nome: ");
    gets(nome);

    printf("\n");
    for(i = 0; i <= 0; i++){
        printf("Valor do PRIMEIRO elemento da string = %c\n", nome[i]);
    }

    printf("\n");
    for(i = 6; i <= 6; i++){
        printf("Valor do ULTIMO elemento da string = %c\n", nome[i]);
    }

    printf("\n");
    for (i = 4; i <= 4; i++){
        printf("Valor do QUARTO elemento da string = %c\n", nome[i]);
    }

    printf("\n");
    printf("Valor do PRIMEIRO AO TERCEIRO elemento da string = ");
    for(i = 0; i < 3; i++){
        printf("%c", nome[i]);
    }

    printf("\n\n");
    printf("Vetor completo= ");
    for (i = 0; i <= 6; i++){
        printf("%c", nome[i]);
    }

    printf("\n");
    getch();
}
