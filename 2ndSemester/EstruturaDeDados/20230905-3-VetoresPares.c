/*crie um altoritmo que leia um vetor inteiro de 10 posições, e mostre na tela: 
1- vetor impresso
2- imprima os elementos pares do vetor
3- imprima os elementos impares do vetor
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10], i, contadorPar = 0, contadorImpar = 0; //lembrar de começar os contadores zerados

    printf("Vetor de 10 elementos - Pares e Impares");

    //Rotina de leitura do vetor
    printf("\nCarregando os elementos do vetor:");
    for( i = 1 ; i < 10; i++){
        printf("\nDigite o valor para a posicao [%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            contadorPar++;
            } else { contadorImpar++; }
    }

    //printf("\n%d Contado Par", contadorPar);
    //printf("\n%d ContadorImpar", contadorImpar);


    //Rotina de Impressão do vetor
    printf("\nElementos do vetor com 10 posicoes: \n");
    for ( i = 0 ; i < 10 ; i++){
        printf("%d\t", vetor[i]);
    }

    //Imprimir os pares
    if(contadorPar > 0){
        printf("\n\nElementos pares do vetor:\n");
        for ( i = 0 ; i < 10 ; i++){
            if(vetor[i] % 2 == 0){
                printf("%d\t", vetor[i]);}
        }
    } else { printf("\n\nNao existem numeros pares no vetor!");}

    //Imprimir os Impares
    if(contadorImpar > 0){
        printf("\n\nElementos impares do vetor:\n");
        for ( i = 0 ; i < 10 ; i++){
            if(vetor[i] % 2 != 0){
                printf("%d\t", vetor[i]);}
        }
    } else { printf("\n\nNao existem numeros impares no vetor!");}
}