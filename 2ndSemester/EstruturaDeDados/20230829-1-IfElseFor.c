//Crie um algoritmo que leia dois numeros e imprima todos os numeros no intervalor fechado,
//do menor para o maior:

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); //adiciona idioma portugues

    int numero1, numero2, aux, i;

    printf("Números dentro do intervalo interiros");
    printf("\nDigite o primeiro número do intervalo:");
    scanf("%d", &numero1);

    printf("\nDigite o segundo numero do intervalo:");
    scanf("%d", &numero2);

    //precisamos trocar os números de lugar, caso o primeiro numero for maior que o segundo.
    if (numero1 > numero2) {
        aux = numero1;
        numero1 = numero2;
        numero2 = aux;
    }

    system("cls"); //para limpar a tela

    printf("Números no intervalo entre %d e %d", numero1, numero2);

    for(i = numero1; i <= numero2; i++ ) { //uso o for quando eu sei p número de repeticoes
        printf("\n%d", i);
    }
}