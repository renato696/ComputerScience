//crie um algoritmo que leia um numero interiro positivo n e deixe escolher qual a 
//tabuada de multiplicar que deve ser impressa na tela:

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero, i;

    printf("Tabuada de um número digitado pelo usuário");
    printf("\nDigite um número inteiro que deseja saber a tabuada:");
    scanf("%d", &numero);

    printf("\nTabuada do numero: %d", numero);
    for(i =0; i <= 10; i++){
        printf("\n%d x %d = %d", numero, i, numero*i);
    }
}