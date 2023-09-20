/*Escrever um altoritmo que peça pra que o usuario leia dois vetores
A e B de 6 elementos cada um e crie e mostre na tela o vetor SOMA e o 
vetor DIFERENCA, que serão, respectivamente, a soma e a diferenca dos 
elementos correspondentes em A e B:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, vectorA[6], vectorB[6], vectorSUM[6], vectorDIF[6];

    printf("Imprimir os vetores A e B com 6 numeros inteiros, e os vetores soma A+B e diferenca A-B:");

    printf("\nCarregando o vetor A...");
    for(i=0; i<6; i++){
        printf("\n Digite posicao do vetor[%d]", i);
        scanf("%d", &vectorA[i]);
    }

    printf("\nCarregando o vetor B...");
    for(i=0; i<6; i++){
        printf("\n Digite posicao do vetor[%d]", i);
        scanf("%d", &vectorB[i]);
    }

    //soma dos vetores
    for(i=0; i<6; i++){
        vectorSUM[i] = vectorA[i] + vectorB[i];
    };

    //diferença dos vetores

    for(i=0; i<6; i++){
        vectorDIF[i] = vectorA[i] - vectorB[i]; 
    };

    printf("\n\nO vetor soma:\n");
        for(i=0; i<6; i++){
            printf("%d", vectorSUM[i]);
        }

    printf("\n\nO vetor diferenca:\n");
        for(i=0; i<6; i++){
            printf("%d", vectorDIF[i]);
        }

}