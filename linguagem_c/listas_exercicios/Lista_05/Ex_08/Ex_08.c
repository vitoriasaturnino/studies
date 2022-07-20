/*Exercício 08 - Preencher um vetor com os números pares do número 
2 a 20. Preencher um vetor com os números de 10 a 19. Somar os 
vetores acima.*/

#include<stdio.h>

int main(void){
    int i, auxiliar = 0, vet_pares[10], vet_alearorios[10];

    // preechimento do vet_paresor vet_pares
    for(i = 0; i <= 9; i++){
        vet_pares[i] = auxiliar + 2;
        auxiliar = auxiliar + 2;
    }
    //exibindo o vet_paresor vet_pares
    for(i = 0; i <= 9; i++){
        //exibindo os valores pares 2,4,6,8,10,12,14,16,18,20.
        printf("\t %d ",vet_pares[i]);
    }
    printf("\n");

    // preechimento do vet_paresor, vet_alearorios
    for(i = 0; i <= 9; i++){
        vet_alearorios[i] = i+10;
    }
    //exibindo o vet_paresor, vet_alearorios
    for(i = 0; i <= 9; i++){
        //exibindo os valores pares 10,11,12,13,14,15,16,17,18,19,20.
        printf("\t %d ", vet_alearorios[i]);
    }
    printf("\n");

    //preechimento da soma dos vet_paresores vet_pares[i] +,    vet_alearorios[i]
    for(i = 0; i <= 9; i++){
        /*exibindo a soma dos valores 2+10=12, 4+11=15, 6+12=18, 8+13=21
        10+14=24, 12+15=27, 14+16=30, 16+17=33, 18+18=36, 20+19=39*/
        printf("\t %d ",vet_pares[i] + vet_alearorios[i]);
    }

    printf("\n\n");
    system("pause");
}
