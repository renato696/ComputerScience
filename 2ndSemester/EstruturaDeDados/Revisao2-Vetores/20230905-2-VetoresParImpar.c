/*Crie um algoritmo que leia um vetor de 12 posições, de inteiros, e escreva o vetor,
com uma as mensagens: "é par" ou "é impar".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[12], i;

    printf("Vetor de 12 inteiros - Par ou Impar");

    //Rotina de Leitura do Vetor
    for (i = 0; i < 12; i++){
        printf("\nDigite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor de 12 inteiros - Par ou Impar");
    for (i = 0; i < 12; i++){
        if(vetor[i] % 2 == 0){
            printf("\n%d - é par!", vetor[i]);}
        else{
            printf("\n%d - é impar!", vetor[i]);}
        }
    }