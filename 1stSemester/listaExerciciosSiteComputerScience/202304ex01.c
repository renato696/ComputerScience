#include<stdio.h>

int main(){
    int numero1, numero2;

    printf("digite o numero inteiro 1:\n");
    scanf("%d", &numero1);

    printf("digite o numero inteiro 2:\n");
    scanf("%d", &numero2);

    if (numero1 > numero2){
        printf("o numero 1 eh maior que o numero 2");}
        else {
            printf("o numero 2 eh maior que o numero 1");
        }
    }