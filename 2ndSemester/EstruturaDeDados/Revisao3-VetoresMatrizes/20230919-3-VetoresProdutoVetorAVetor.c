/*Faça um programa que receba do usuario dois vetores A e B, com 10 números
inteiros cada. Crie um novo vetor denominado C, calculando: C = A x B
Mostre na tela os dados do vetor C.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int vectorA[10], vectorB[10], vectorC[10], i;

    printf("Multiplicacao de dois vetores de 10 elementos, termo a termo:");

    printf("\nCarregando o vetor A:");
    for( i = 0; i < 10; i++){
        printf("\nDigite o valor para vetor A posicao [%d]", i);
        scanf("%d", &vectorA[i]);
    }

    printf("\nCarregando o vetor B:");
    for( i = 0; i < 10; i++){
        printf("\nDigite o valor para vetor B posicao [%d]", i);
        scanf("%d", &vectorB[i]);
        vectorC[i] = vectorA[i] * vectorB[i];
    }

    system("cls");

    printf("\n\nVetor A :\n");
        for( i = 0; i < 10; i++){
            printf("%4d", vectorA[i]);
        }

    printf("\n\nVetor B :\n");
        for( i = 0; i < 10; i++){
            printf("%4d", vectorB[i]);
        }

    printf("\n\nVetor C - multiplicacao vetor A por vetor B :\n");
        for( i = 0; i < 10; i++){
            printf("%4d", vectorC[i]);
        }

}