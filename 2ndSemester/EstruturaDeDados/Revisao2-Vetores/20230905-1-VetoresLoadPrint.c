/*crie um algoritmo que leia um vetor VET de 10 posicoes e escreva-o na tela:*/

#include <stdio.h>

int main(){
    int vet[10], i;

    printf("Vetor de 10 elementos inteiros - carrregar e exibir na tela:");
    
    //Rotina de leitura do vetor vet
    printf("\nCarregando o vetor vet:");
    for (i = 0; i < 10; i++){
        printf("\nDigite vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    //Rotina de impressão do vetor vet
    printf("\nVetor vet de 10 elementos impresso na tela: ");
    for (i = 0; i < 10; i++){
        printf("%3d", vet[i]); //%3d dará a impressao com 3 espaços em branco entre os componentes
        //se eu usar "%d\t" , vou ter 8 espaços em branco entre os componentes do vetor
    }
}