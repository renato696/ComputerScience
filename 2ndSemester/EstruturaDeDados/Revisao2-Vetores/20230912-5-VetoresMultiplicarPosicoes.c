/* Geometria analitica e algebra linear, multiplicidade por um escalar; 
Crie um algoritmo que leia um vetor com 8 numeros reais, leia um numero X
e multiplique o vetor pelo numero X lido e mostre o vetor anterio e o vetor
multiplicado pelo numero X
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int vector[8], i, factorMulti, vectorProduct[8];

    printf("Inserir 8 numeros em um vetor, e multiplicar todos as posicoes do vetor pelo fator informado");
    printf("\nCarregando o vetor...");
    for(i=0; i<8; i++){
        printf("\n Digite posicao do vetor[%d]", i);
        scanf("%d", &vector[i]);
    }

    printf("\n\nInforme o valor a ser multiplicado nas posicoes do vetor:");
    scanf("%d", &factorMulti);

    system("cls");

    printf("\nO vetor original:\n");
    for(i=0; i<8; i++){
        printf("%2d", vector[i]);
    }

    for(i=0; i<8; i++){
        vectorProduct[i] = factorMulti * vector[i];
    } 

    printf("\n\nO vetor multiplicado pelo fator fica:\n");
    for(i=0; i<8; i++){
        printf("%3d", vectorProduct[i]);}

}

