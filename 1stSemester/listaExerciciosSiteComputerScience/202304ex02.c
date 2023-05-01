#include<stdio.h>

int main(){
	int numero;

	printf("digite um numero inteiro positivo ou negavito\n");
	scanf("%d", &numero);

	if(numero >0){
		printf("o numero eh positivo");}
	else if(numero < 0){
		printf("o numero eh negativo");}
	else{printf("voce digitou zero");}
}
