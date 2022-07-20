/*Exercício 05 -Criar um programa em linguagem C 
que converta um numero decimal de 0 a 15 em numero binário.  */

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    int decimal, x1, x2, x3, x4;

    printf("\t CONVERTENDO DECIMAL P/ BIN�RIO \t");
    printf("\n------------------------------------------------\n");
    printf("Digite um n�mero entre 0 e 15: ");
    scanf("%d", &decimal);

    x4 = (decimal % 2);
    x3 = (decimal / 2) %2;
    x2 = (decimal / 2 / 2) % 2;
    x1 = (decimal / 2 / 2 / 2) % 2;

    printf("%d em base bin�ria corresponde a %d%d%d%d ", decimal, x1, x2, x3, x4);
    printf("\n------------------------------------------------\n");

    getch();
}
