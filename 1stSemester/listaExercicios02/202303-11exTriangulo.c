#include<stdio.h>

int main(){
	int ladoA, ladoB, ladoC, ladoMaior, lado1, lado2;

	printf("Insira o tamanho do lado A do triangulo: ");
	scanf("%d", &ladoA);

	printf("\nInsira o tamanho do lado B do triangulo: ");
	scanf("%d", &ladoB);

	printf("\nInsira o tamanho do lado C do triangulo: ");
	scanf("%d", &ladoC);

	if(ladoB > ladoA){
		ladoMaior = ladoB;
		lado1 = ladoA;
		lado2 = ladoC;}
	else if((ladoC > ladoA) || (ladoC > ladoB)){
		ladoMaior = ladoC;
		lado1 = ladoA;
		lado2 = ladoB;}
	else { 
		ladoMaior = ladoA;
		lado1 = ladoB;
		lado2 = ladoC;
	}


	if((lado1+lado2) > ladoMaior){
		if((ladoA == ladoB) && (ladoB == ladoC)){
			printf("\nTrata-se de triangulo equilatero\n");}
		else if((ladoA == ladoB) && (ladoB != ladoC)){
			printf("\nTrata-se de triangulo isosceles\n");}
		else if((ladoA == ladoC) && (ladoC != ladoB)){
			printf("\nTrata-se de triangulo isosceles\n");}	
		else if((ladoB == ladoC) && (ladoC != ladoA)){
			printf("\nTrata-se de triangulo isosceles\n");}
		else { printf("\nTrata-se de triangulo escaleno\n");}
	} else { printf("\nAs medidas informadas não formam um triangulo\n");}
	
	return 0;
}
