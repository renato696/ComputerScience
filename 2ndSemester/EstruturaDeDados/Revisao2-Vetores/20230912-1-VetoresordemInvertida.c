/*Criar um algoritmo que leia um vetor de 10 elementos inteiros
e imprima o vetor em ordem invertida:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[10], i;

    printf("Vetor de 10 elementos inteiros e seu vetor invertido:");
    printf("\nCarregando o vetor...");
    for(i=0; i<10; i++){
        printf("\nDigite um valor para a posicao do vetor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    system("cls");

    printf("Vetor inicial: \n");
    for(i=0; i<10; i++){
        printf("%4d", vetor[i]);
    }

    printf("\n\nVetor invertido: \n");
    for(i=9; i >= 0; i--){
        printf("%4d", vetor[i]);
    }



}
