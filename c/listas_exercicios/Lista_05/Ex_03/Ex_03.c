/*Exxercicio 03 - Preencher um vetor com os números pares do número 2 a 20.*/

#include <stdio.h>

int main(void){
    int valor_par[9];
    int j = 0;

    for(int i = 0; i <= 20; i++){

        if(i % 2 == 0 && i > 0){
            valor_par[j] = i;

        printf("%d\n", valor_par[j]);
        }

        j++;
    }
}



