/*crie um algoritmo que leia um numero inteiro e apresente o fatorial desse numero*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int fatorial = 1, numero, i;

    printf("Fatorial de un numero inteiro positivo:");
    printf("\nDigite um numero inteiro positivo:");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++){
        fatorial *= i; //fatorial = fatorial * i  mesma coisa mas escrito diferente
    }

    printf("%d! = %d", numero, fatorial);

}