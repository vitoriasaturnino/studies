/*Exercício 12 - Armazenar em Vetores, Nomes e Notas PR1 e PR2 de 6 alamos. Calcular a média de cada aluno e imprimir aprovado se a média for maior que
5 e reprovado se média for menor ou igual a 5. OBS.: 2 vetores para as notas
tipo float. 1 vetor para os nomes. 1 vetor para a média. 1 vetor para situação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    float PR_1[3], PR_2[3], media[3];
    char nome[3][30], nome1[3][30], situacao[3][30];
    int x, y = 1;

    for(x = 0; x <3; x++){
        printf("Informe nome %d: ", x + 1);
        gets(nome[x]);
        printf("Informe nota %d do aluno %s: ", y, nome[x]);
        scanf("%f", & PR_1[x]);
        gets(nome1[x]);
        y ++;
        printf("Informe nota %d do aluno %s: ", y, nome[x]);
        scanf("%f", & PR_2[x]);
        gets(nome1[x]);
        y = 1;
        printf("\n");
    }

    for(x = 0; x < 3; x++){
        media[x] = (PR_1[x] + PR_2[x]) / 2;
        if (media[x] > 5){
            strcpy(situacao[x], "Aluno provado!");
        }else{
            strcpy(situacao[x], "Aluno reprovado");
        }
    }

    printf ("\n \nNome \tNota1 \t \tNota2 \tMedia \tSituacao");

    for(x = 0; x <3; x ++){
        printf ("\n %s \t %3.2f \t %3.2f \t %3.2f \t %s", nome[x], PR_1[x], PR_2[x], media[x], situacao[x]);
    }

    printf("\n \n");
    system("pause");
}
