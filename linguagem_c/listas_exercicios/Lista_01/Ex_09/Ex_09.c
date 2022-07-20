/*Exercício 09 - Uma fábrica de brinquedos no Japão inventou uma nova forma de produzir bambolês. O cliente escolhe o raio do bambolê e a fábrica produz o 
bambolê sob medida para o cliente. Crie um programa para ajudar o fabricante a
calcular o perímetro do bambolê baseado na medida do raio escolhida pelo cliente.*/

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float raio;

    printf("\n\tBAMBOL� SOB MEDIDA\t");
    printf("\n----------------------------------\n");
    printf("Qual a medida do raio para o seu bambol�? ");
    scanf("%f", &raio);

    float perimetro = ((2* 3.14) * raio);

    printf("J� sei!\nO per�metro do bambol� perfeito para voc� � %.3f cm", perimetro);
    printf("\n----------------------------------\n");
}
