/*Exerc�cio 05 - Criar um programa em linguagem C que imprima dois 
números com o inicio de 0 e 10 e finalize 10 e 0, todos os dois ao
 mesmo tempo, com o intervalo de 0,5 segundos utilizando FOR DUPLO.*/

#include <stdio.h>

void main() {

    int cont_crescente, cont_decrescente;

    for (cont_crescente = 0, cont_decrescente = 10; cont_crescente <= 10, cont_decrescente >= 0; cont_crescente++, cont_decrescente--) {
        printf("\n%d %d", cont_crescente, cont_decrescente);
        sleep(1);
    }
    printf("\n");
}
