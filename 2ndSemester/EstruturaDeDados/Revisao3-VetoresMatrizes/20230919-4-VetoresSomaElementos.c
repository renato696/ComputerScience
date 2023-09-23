/*EScreva um algoritmo que peça para o usuario digitar os valores de um vetor
de inteiros com 10 elementos, e, em seguida, exiba o valor da soma dos elementos 
do vetor e o menor elemento do vetor em sua posicao.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int vector[10], i, somaElementos = 0, menorValor, maiorValor, posicaoMenor = 0, posicaoMaior = 0;

printf("Vetor de 10 indices, quem eh o maior, o menor e suas posicoes:\n");
printf("Carregando o vetor:");
printf("\nDigite um valor para a posicao [0] :");
scanf("%d", &vector[0]);
maiorValor = vector[0];
menorValor = vector[0];

for( i = 1; i < 10; i++){
    printf("\nDigite valor[%d]: ", i);
    scanf("%d", &vector[i]);
    if(vector[i] > maiorValor){
        maiorValor = vector[i]; 
        posicaoMaior = i;
        } else if (vector[i] < menorValor){
            menorValor = vector[i];
            posicaoMenor = i;
            }
}

printf("\nVetor original: \n");
    for( i = 0; i < 10; i++){
        printf("%5d", vector[i]);
    }

printf("\n\n Maior elemento do vetor %d na posicao %d", maiorValor, posicaoMaior);
printf("\n\n Menor elemento do vetor %d na posicao %d", menorValor, posicaoMenor);

}