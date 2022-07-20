/*Exercício 12 - Um fabricante de ferraduras africano acaba de expandir os negócios. Agora ele fabrica ferraduras para qualquer tipo de animal com
casco. O formato das ferraduras é o de meia tora. O cliente escolhe o raio externo e o raio interno e ele produz a ferradura. Crie um programa para ajudar o ferreiro a calcular a área da ferradura baseado na medida do raio esterno e interno fornecido pelo cliente.*/

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float raio_interno, raio_externo;

    printf("\n\tFERREIRO\t");
    printf("\n------------------------\n");
    printf("Qual a medida do raio externo? ");
    scanf("%f", &raio_externo);
    printf("Qual a mdida do raio interno? ");
    scanf("%f", &raio_interno);

    float area_externa = (3.14 *(2 * raio_externo));
    float area_interna = (3.14 * (2 * raio_interno));

    printf("Para esse cliente voc� precisa fazer uma ferradura com uma �rea externa de %.2fcm e uma �rea interna de %.2fcm.", area_externa, area_interna);
}
