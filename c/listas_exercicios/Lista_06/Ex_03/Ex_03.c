/*Eercício 03 - Faça um programa que lê uma matriz 
de 3x3 elementos usando um comando for, multiplica 
cada elemento por 5 e imprime o resultado. */

#include<stdio.h>

int main(void){

    int i, j, m[3][3];

    for(i = 0; i  <  3; i++){
         for(j = 0; j < 3; j++){
        printf("Elemento[%d][%d] =  ",i,j);
        scanf("%d",&m[i][j]);
        }
    }

    printf("\nValores Originais\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t",m[i][j]);
        }

    printf("\n");
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        m[i][j] = m[i][j] * 5;
        }
    }

    printf("\nValores Multiplicados por\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t",m[i][j]);
        }

    printf("\n\n");
    }
}
