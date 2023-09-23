/* Crie um vetor com 5 elementos e calcule o fatorial de cada elemento do vetor:*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int vector[5], i, j, fatorial;

printf("Vetor de 5 numeros inteiros e seus fatoriais");
for( i = 0; i < 5; i++){
    printf("\nDigite o numero para a posicao [%d] do vetor: ", i);
    scanf("%d", &vector[i]);
}

system("cls");

printf("Vetor de 5 numeros na tela: \n");
for( i = 0; i < 5; i++){
    printf("%4d", vector[i]);
}

printf("\n\n Vetor de fatoriais: \n");
for( i = 0; i < 5; i++){
    fatorial = 1;
    for( j = 1; j <= vector[i]; j++){
        fatorial *= j; // fatorial = fatorial * j
    }
    printf("\n%d! = %d", vector[i], fatorial);
}


}