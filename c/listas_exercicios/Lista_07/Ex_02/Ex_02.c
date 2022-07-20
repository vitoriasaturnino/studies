/*Exercício 02 - Criar um programa com ponteiro, que atribua duas constantes a duas variáveis do tipo inteiro e depois seja inserido o endereço das variáveis em dois ponteiros, imprimir os ponteiros, atribuir um ponteiro em outro e depois imprimir, depois, atribuir um numero a um ponteiro já usado, também uma variável a outra e depois imprimir tudo.*/

# include <stdio.h>
# include <stdlib.h>

int main(void){
    int *ponteiro_1, *ponteiro_2;

    /*atribuindo duas constantes a duas variáveis do tipo inteiro*/
    int a = 27, b = 43;

    /*a inserindo o endereço das variáveis em dois ponteiros*/
    ponteiro_1 = &a;
    ponteiro_2 = &b;
    
    /*exibindo ponteiros*/
    printf("Valor: %d - %d \n\n", *ponteiro_1, ponteiro_2 ) ;

    /* atribuindo um ponteiro em outro e imprimindo*/
    *ponteiro_1 = ponteiro_2;
    printf("Valor: %d - %d \n\n", *ponteiro_1, ponteiro_2 ) ;

    /* atribuindo um numero a um ponteiro já usado
    e uma variável a outra*/
    *ponteiro_1 = 27;
    ponteiro_2 = ponteiro_1;
    printf ( "Valor: %d - %d \n\n", *ponteiro_1, ponteiro_2 ) ;
    system ("pause");
}
