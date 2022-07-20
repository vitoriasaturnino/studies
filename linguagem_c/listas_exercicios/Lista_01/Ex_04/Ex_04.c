/*Exercício 04 - Criar um programa em linguagem
C que faça a conversão de m emkm hm, dam, dc, dm e mm.*/

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    float m ,km, hm, dam, dc, cm, mm;

    printf("\t CONVERTENDO MEDIDAS \t");
    printf("\n-------------------------------------\n");
    printf("Quantos metros voc� quer converter? ");
    scanf("%f", &m);

    km = m / 1000;
    hm = m / 100;
    dam = m / 10;
    dc = m * 10;
    cm = m * 100;
    mm = m * 1000;

    printf("%.2f metro(s):", m);
    printf("\n%.3f Quil�metros(km); \n%.3f Hect�metros(hm); \n%.3f Dec�metros(dam); \n%.0f Dec�metros(dc); \n%.0f Cent�metros(cm); \n%.0f Mil�metros(mm);",km, hm, dam, dc, cm, mm);
    printf("\n-------------------------------------\n");
}
