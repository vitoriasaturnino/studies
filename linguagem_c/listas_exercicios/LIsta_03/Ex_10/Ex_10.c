/*Exerc�cio 10 - Criar em programa em linguagem C, que efetue a 
PA conforme imagem abaixo,utilizando FOR:*/

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int primeiro_term, razao, num_termos;

    printf("\nPROGRESS�O ARITM�TICA\n");
    printf("\nInforme o primeiro termo: ");
    scanf("%d", &primeiro_term);
    printf("\nInforme a raz�o: ");
    scanf("%d", &razao);
    printf("\ninforme a quantidade de termos: ");
    scanf("%d", &num_termos);

    printf("%d", primeiro_term);

    int auxiliar = primeiro_term;
    int i, soma;

    for(i = 2; i <= num_termos; i++) {
        int termo = auxiliar + razao;
        printf("%d", termo);
        soma = auxiliar + termo;
        auxiliar = termo;
    }
    soma = soma + primeiro_term;
    printf("\nSoma dos termos da PA: %d", soma);
    printf("\n");
}
