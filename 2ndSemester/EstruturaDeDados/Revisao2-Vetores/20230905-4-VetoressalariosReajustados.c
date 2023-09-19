/*crie um algoritmo que leia um vetor de salarios de 8 posições e calcule e imprima
o vetor com os novos salarios, reajustados em 12%*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario[8], salarioReajustado[8];
    int i;

    printf("Vetor de 8 elementos - Salarios Reajustados 12%%");

    //Rotina de leitura do vetor
    printf("\nCarregando os salarios no vetor:");
    for(i = 0 ; i < 8; i++){
        printf("\nDigite o salario para a posicao [%d] do vetor: ", i);
        scanf("%f", &salario[i]);
        salarioReajustado[i] = salario[i]*1.12;
    }

    printf("Vetor de 8 salarios sem reajuste: \n");
    for( i = 0; i <8 ; i++){
        printf("%.2f  ", salario[i]);
    }

printf("\n\nVetor de 8 salarios com reajuste: \n");
    for( i = 0; i <8 ; i++){
        printf("%.2f  ", salarioReajustado[i]);
    }

    }