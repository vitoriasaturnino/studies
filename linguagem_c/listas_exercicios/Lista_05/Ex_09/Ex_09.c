/*Exercício 09 - Preencher um vetor de 8 elementos inteiros. 
Mostrar o vetor e informar quantos números são maior que 30, 
Somar estes números. Somar todos os números. */

#include<stdio.h>

int main(void){
    int vet_1[8], i, cont = 0, soma_maiores_30 = 0, soma_total = 0;

    for(i = 0; i <= 7; i++){
    printf("\nDigite um valor: ");
    scanf("%d", &vet_1[i]);

        if(vet_1[i] > 30){
            cont++;
            soma_maiores_30 = soma_maiores_30 + vet_1[i];
        }
    }
    printf("\n\n");

    for(i = 0; i <= 7; i++){
        printf("\t%d",vet_1[i]);
    }

    printf("\n");

    printf("\n %d Numeros sao maiores que 30",cont);
    printf("\n A Soma dos numeros maiores que 30 e = %d", soma_maiores_30);

    for(i = 0; i <= 7; i++){
        soma_total = soma_total + vet_1[i];
    }

    printf("\n A Soma dos numeros digitados e = %d", soma_total);
    printf("\n\n");
    system("pause");
}
