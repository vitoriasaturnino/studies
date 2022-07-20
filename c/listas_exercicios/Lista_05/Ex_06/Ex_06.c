/*Exercíco 06 - Preencher um vetor com 3 nomes e mostrar quantas 
letras A e E tem nos 3 nome.*/

#include<stdio.h>
#include <string.h>

int main(void){
     int i, j;
     char nome[3][30],conta=0, conte=0, tam=0;

     for(i = 0; i < 3; i++){
         printf("Digite um nome: ");
         gets(nome[i]);
     }

     for(i = 0; i < 3; i++){
         tam = strlen(nome[i]);

         for(j = 0; j <= tam-1; j++){

         if(nome[i][j]=='A'||nome[i][j]=='a')
         conta++;

         if(nome[i][j]=='E' || nome[i][j]=='e')
         conte++;
        }
     }
     printf("\nEncontrei %d letras A e %d letras E",conta, conte);

     printf("\n\n");
     system("pause");
}
