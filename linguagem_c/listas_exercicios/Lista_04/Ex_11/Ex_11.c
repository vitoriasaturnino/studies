/*eXERCÍCIO 11 - Criar em linguagem C e utilizando o
comando WHILE e / ou DO WHILE aninhado, um programa 
conforme imagem abaixo*/ 

#include <stdio.h>

int main(void) {

    int linha = 1, numero = 1;

    while(linha <= 4){
        while(numero <= 4){
			printf("%2u \t", linha * numero);
			numero++;
		}
		printf("\n");
		numero = 1;
		linha++;
    }
}