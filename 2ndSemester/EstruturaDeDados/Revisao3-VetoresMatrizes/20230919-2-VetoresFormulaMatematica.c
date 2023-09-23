/*Faça um vetor de tamanho 20 prenchido com o seguinte valor:
(i + 5 * 1) % (i = 1), sendo i a posicao do elemento do vetor.
Em seguida, imprima o vetor na tela
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vector[20], i;

    printf("Vetor de 20 posicoes gerado em base de uma formula matematica:");

    for(i = 0; i < 20; i++){
        vector[i] = (i + 5 * i) % (i + 1);
    }

    printf("\n\n Vetor gerado pela formula matematica dada: \n");
    for (i = 0; i < 20; i++){
        printf("%4d", vector[i]);
    }

}