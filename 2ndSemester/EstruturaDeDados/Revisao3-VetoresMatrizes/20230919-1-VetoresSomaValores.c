/* Faça um programa que leia um vetor de 8 posicoes, e em seguida,
 leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
 Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas
 posições X e Y*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    int vector[8], i, valueX, valueY, somaPosicoesXY;

    printf("Vetor de 8 indices inteiros");
    for(i=0; i<8; i++){
        printf("\nDigite vetor[%d] : ", i);
        scanf("%d", &vector[i]);
    }

    system("cls");

    printf("Vetor de 8 posicoes na tela: \n\n");
    for(i=0; i<8; i++){
        printf("%4d", vector[i]);
    }

    printf("\n\nDigite um indice X do vetor - entre 0 e 7:\n");
    scanf("%d", &valueX);
    printf("\nDigite um indice y do vetor - entre 0 e 7:\n");
    scanf("%d", &valueY);

    if(valueX>= 0 && valueX<8 && valueY>=0 && valueY<8){
        somaPosicoesXY = vector[valueX] + vector[valueY];
        printf("\nA soma das posicoes X e Y = %d", somaPosicoesXY);
    } else {
        printf("\n Erro! indices fora do range 1 - 7");
        }    
 }