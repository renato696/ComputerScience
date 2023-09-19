/*crie um programa em C que leia um numero inteiro e diga se ele é ou não primo:*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero, i, contador = 0;

    printf("Numeros Primos");
    printf("\n\nDigite um numero inteiro positivo:");
    scanf("%d", &numero);

    printf("\nDivisores de %d", numero);
    for (i= 1; i <= numero; i++){
        if(numero % i == 0){
            printf("\n%d",i);
            contador++;
        }
    }

    if(contador == 2){
        printf("\n\n2 divisores, configura como numero primo");}
    else {
        printf("\n\n%d divisores, nao configura como primo", contador);}

}
