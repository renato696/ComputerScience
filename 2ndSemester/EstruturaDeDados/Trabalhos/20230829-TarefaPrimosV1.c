/*
Renato Pires de Campos Neto

Tarefa - crie um programa que leia 10 elementos inteiros e mostre a quantidade
e numeros primos dentre os numeros que foram digitados:
Exemplo: 
4
7
12
5... => existem 3 numeros primos*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[10], i, j, quantidadePrimos = 0;

    printf("Vetor de 10 elementos - Quantos são primos?");

    //Rotina de Leitura do vetor
    for (i = 0; i < 4; i++){
        printf("\nDigite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

//Debug - leitura do vetor, se correto
//    for (i = 0; i < 4; i++){
//        printf("%d  ", vetor[i]);
//    }

    //Teste do vetor se é primo
    for (i = 0; i <= vetor[i]; i++){
        if(vetor[i] % (i+1) == 0){
            quantidadePrimos = quantidadePrimos + 1;
        }
    } 
    
   printf("\nQuantidade de numeros primos no vetor: %d", quantidadePrimos);

}