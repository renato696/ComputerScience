/*Faça um programa que carregue um vetor com 15 elementos inteiros, e verifique
a existência de elementos iguais a 30, mostrando as posições em que esses elementos
apareceram*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int vector[15], i, counter30 = 0;

    printf("Vetor de 15 elementos, ocorrencias do número 30 no vetor:");
    printf("\nCarregando o vetor...");
    for(i=0; i<15; i++){
        printf("\n Digite posicao do vetor[%d]", i);
        scanf("%d", &vector[i]);
       //contar quantas vezes o numero 30 aparece
        if(vector[i] == 30){
            counter30++;
        }
    }

    system("cls");

    printf("Vetor original: \n");
    for(i=0; i<15; i++){
        printf("%3d", vector[i]);
    }

    if(counter30 > 0){
        printf("\n\nHa %d ocorrencias de 30 o vetor, nas posicoes:\n", counter30);
        for(i=0; i < 15; i++){
            if(vector[i] == 30){
                printf("%d\n", i);
            }
        }
    } else { printf("Não foram encontrados valores 30 no vetor.");}






}