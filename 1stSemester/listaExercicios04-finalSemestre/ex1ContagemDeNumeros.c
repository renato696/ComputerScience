#include <stdio.h>

int main (){

	int inicio,numero,par,soma,acumulador;

	printf("Por favor, digite um numero:\n");
	scanf("%d", &numero);
	
	par = numero%2;

	if(par == 0){
		printf("os numeros pares menores que o numero digitado sao:\n");
		for(inicio=0;inicio<numero;inicio=inicio+2){
		printf("%d \n", inicio);}
	} else {
		printf("os numeros impares menores que o numero digitado sao:\n");
		for(inicio = 1; inicio<numero; inicio = inicio + 2){
		printf("%d \n", inicio);}
	};

	soma = 0;
	while(soma<=numero){
		soma = soma + 2;}
	printf("a soma dos numeros = %d \n", soma);
}
