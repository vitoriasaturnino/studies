/*Exercício 10 - Preencher um vetor de 8 elementos inteiros. Mostrar o vetor
na horizontal com\t. Calcular a média do vetor. Mostrar quantos números são múltiplos de 5. Quantos números são maiores que 10 e menores que 30. Qual o 
maior número do vetor*/

#include<stdio.h>

int main(void){

    int vet_num_entrada[8], i, cont = 0, multiplo_5 = 0, maior_10_30 = 0, maior_num = 0;
    float soma = 0;

    for(i = 0; i <= 7; i++){
    printf("Insira um numero %d: ", i + 1);
    scanf("%d", &vet_num_entrada[i]);
    printf("\n");
    }

    printf("\n\n");

    for(i = 0; i <= 7; i++){
        printf("\t%d", vet_num_entrada[i]);
    }

    printf("\n\n");

    for(i = 0; i <= 7; i++){
        soma = soma + vet_num_entrada[i];
        
        if(vet_num_entrada[i] % 5 == 0){
            multiplo_5++;
        }
        if(vet_num_entrada[i] > 10 && vet_num_entrada[i] < 30){
            maior_10_30++;
        }
        if(vet_num_entrada[i] > maior_num){
            maior_num = vet_num_entrada[i];
        }

    }

    printf("\n A media do vetor e: %3.2f ", soma / 8);
    printf("\n Multiplos de 5: %d ", multiplo_5);
    printf("\n Entre 10 e 30: %d ", maior_10_30);
    printf("\n Maior numero: %d ", maior_num);

    printf("\n\n");
    system("pause");
}
