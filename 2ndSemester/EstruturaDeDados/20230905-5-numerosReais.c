/*Faça um programa que carregue um vetor com dez numeros reais,
calcule e mostre a quantidade de numeros negativos, e a soma dos
numeros positivos*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float vetor[10], somaPositivos = 0;
    int i, contadorNegativo;

    printf("Vetor de 10 números Reais - Negativos e Positivos");

    //Rotina de Leitura do Vetor
    for (i = 0; i < 10; i++){
        printf("\nDigite vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }

    for(i=0; i < 10; i++){
        if(vetor[i] > 0){
            somaPositivos = vetor[i] + somaPositivos;
       } else (contadorNegativo++);
    }

    printf("\nSoma dos numeros positivos: %.2f", somaPositivos);
    printf("\nQuantidade de numeros negativos: %d", contadorNegativo);

}

