/*Crie um algoritmo que leia um vetor com 8 numeros inteiros,
calcule e mostre na tela os numeros primos e suas respectivas posicoes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int vector[8], i, divisor, counter;

printf("Vetor de 8 posicoes, mostrar os valores primos e seus indices no vetor:\n");
for(i = 0; i < 8; i++){
    printf("\nDigite um numero para a posicao [%d] do vetor: ", i);
    scanf("%d", &vector[i]);
}

system("cls");

printf("\nVetor de 8 posicoes na tela:\n");
for( i = 0; i < 8; i++){
    printf("%4d", vector[i]);
}

printf("\nNumeros primos no vetor e suas respectivas posicoes: \n");
for( i = 0; i < 8; i++){
    counter = 0;
    for( divisor = 1; divisor <= vector[i]; divisor++){
        if(vector[i] % divisor == 0){
            counter++;
        }
    }
    if(counter == 2){
        printf("\n%d na posicao %d", vector[i], i);
    }
}

}