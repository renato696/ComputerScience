/*Faça um programa que carregue um vetor com sete numeros inteiros,
e calcule e mostre:
a) os numeros multiplos de 2;
b) os numeros multiplos de 3;
c) os numeros multiplos de 2 e de 3.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

int vector[7], i;

    printf("Vetor de 7 inteiros - multiplos de 2 e/ou de 3...");
    printf("\nCarregando o vetor...");
    for(i=0; i<7; i++){
        printf("\n Digite posicao do vetor[%d]", i);
        scanf("%d", &vector[i]);
    }
    system("cls");
    printf("Vetor original: \n");
    for(i=0; i <15; i++){
        printf("%5d", vector[i]);
    }

    printf("\n\nMultiplos de 2:\n");
    for(i=0; i<7; i++){
        if(vector[i] % 2 == 0){
            printf("%5d", vector[i]);
        }
    }

    printf("\n\nMultiplos de 3:\n");
    for(i=0; i<7; i++){
        if(vector[i] % 3 == 0){
            printf("%5d", vector[i]);
        }
    }

    printf("\n\nMultiplos de 2 e de 3 ao mesmo tempo:\n");
    for(i=0; i<7; i++){
        if(vector[i] % 2 == 0 && vector[i] % 3 ==0){
            printf("%5d", vector[i]);
        }
    }
}    