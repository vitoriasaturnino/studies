/*Exercício 06 - Criar em linguagem C e utilizando o comando
DO WHILE, que imprima a palavra FATEC o número de vezes que 
for digitado em um intervalo de um segundo.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int cont, fim = 0;
    printf("Informe o número de repetições: ");
    scanf("%d", &cont);
    printf("\n");

    do{
        printf("FATEC ");

        fim++;
    }while(fim <= cont-1);
    printf("\n");
}