/*Exercício 03 - Criar um programa em linguagem
C que converta sua idade emmeses, semanas, dias, horas,
minutos e segundos. */

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int idade, meses, semanas, dias, horas, segundos;

    printf("\tCONVERS�O IDADE\t");
    printf("\n-------------------------------\n");
    printf("Me fala quantos anos voc� tem: ");
    scanf("%d", &idade);

    meses =  idade * 12;
    semanas = meses * 4;
    dias = semanas * 7;
    horas = dias * 24;
    segundos = horas * 60;

    printf("Com %d anos voc� j� viveu:\n", idade);
    printf(" -%d meses;\n -%d semanas;\n -%d dias;\n -%d horas;\n -%d segundos;", meses, semanas, dias, horas, segundos);
    printf("\n-------------------------------\n");
}
