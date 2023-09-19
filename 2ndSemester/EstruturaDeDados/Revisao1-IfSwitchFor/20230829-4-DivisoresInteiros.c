/*Crie um programa em C que leia um numero inteiro e mostre seus divisores inteiros na tela*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero, i, contador = 0;

    printf("Divisores de um numero inteiro positivo:");
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &numero);

    printf("\nDivisores de %d", numero);
    for (i= 1; i <= numero; i++){
        if(numero % i == 0){
            printf("\n%d",i);
            contador++;
        }
    }
    printf("\n\n%d tem %d divisores.", numero, contador);
}