#include<stdio.h>

int main(){
	int ladoA, ladoB, ladoC;

	printf("Insira o tamanho do lado A do triangulo: ");
	scanf("%d", &ladoA);

	printf("\nInsira o tamanho do lado B do triangulo: ");
	scanf("%d", &ladoB);

	printf("\nInsira o tamanho do lado C do triangulo: ");
	scanf("%d", &ladoC);

	if((ladoA == ladoB) && (ladoB == ladoC)){
		printf("\nTrata-se de triangulo equilatero\n");}
	else if((ladoA == ladoB) && (ladoB != ladoC)){
		printf("\nTrata-se de triangulo isosceles\n");}
	else if((ladoA == ladoC) && (ladoC != ladoB)){
		printf("\nTrata-se de triangulo isosceles\n");}	
	else if((ladoB == ladoC) && (ladoC != ladoA)){
		printf("\nTrata-se de triangulo isosceles\n");}
	else {
		printf("\nTrata-se de triangulo escaleno\n");}
	
	return 0;
}
