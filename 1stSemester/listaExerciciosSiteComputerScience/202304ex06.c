#include<stdio.h>

int main(){
	
	int number1, number2, number3, biggest;

	printf("type number 1: ");
	scanf("%d", &number1);

	printf("\ntype number 2: ");
	scanf("%d", &number2);

	printf("\ntype number 3: ");
	scanf("%d", &number3);

	biggest = number1;

	if (number2>biggest){
		biggest = number2;}

	if(number3>biggest){
		biggest = number3;}

	printf("the biggest number is: %d", biggest);

	return 0;
}
