/*crie um algoritmo que verifique se o um numero é PERFEITO ou não:
O número é perfeito quando ele é igual à soma dos seus divisores, EXCETO ele mesmo!
e.g.: 6 é perfeito, pois 1+2+3=6; 
28 é perfeito, pois 1+2+4+7+14=28;
10 não é perfeito, pois 1+2+5 != 10*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero, i, soma = 0;

    printf("Numeros Perfeitos");
    printf("\nDigite um numero inteiro positivo:");
    scanf("%d", &numero);

    for( i = 1; i < numero; i++){
        if(numero % i == 0){
            soma += i; //soma = soma + i
        }
    }

    if(soma == numero){
        printf("\n%d configura numero PERFEITO!", numero);
    } else {
        printf("%d não confitura numero Perfeito!", numero);
    }

}