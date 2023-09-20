/*Leia um vetor de 10 posições e em seguida um valor X qualquer.
Seu programa devera fazer uma busca do valor de X no vetor lido e informar
a posição em que foi encontrado ou se não foi encontrado*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

int vector[10], i, valorX, counterX = 0;

    printf("Vetor de 10 posicoes - encontre o valor de X");
    printf("\nCarregando o vetor...");
    for(i=0; i<10; i++){
        printf("\n Digite posicao do vetor[%d]", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Digite o valor X a ser encontrado dentro do vetor:\n");
    scanf("%d", &valorX);
    
    system("cls");

    printf("Vetor original: \n");
    for(i=0; i <10; i++){
        printf("%5d", vector[i]);
        if(vector[i] == valorX){
            counterX++;}
    }

    if(counterX > 0){
        printf("\n\nHa %d ocorrencias do valor %d no vetor, nas posicoes:  ", counterX, valorX);
        for(i=0; i<10; i++){
            if(vector[i] == valorX) {
                printf("%d\n", i);
            }    
        }
    } else {
        printf("\nO valor X de %d nao aparece no vetor.", valorX);
    }
}