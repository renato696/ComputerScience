#include<stdio.h>

int main(){
	int number1, number2, number3, smaller, bigger;

	printf("insert number 1: ");
	scanf("%d", &number1);

	printf("\ninsert number 2: ");
	scanf("%d", &number2);

	printf("\ninsert number 3: ");
	scanf("%d", &number3);

	if (number1>number2){
		bigger = number1;
		smaller = number2;}
	else (number2 > number1);{
		bigger = number2;
		smaller = number1;}

	if (number3 > bigger){
		bigger = number3;}
	
	if (number3 < smaller){
		smaller = number3;}

	printf("the bigger number is %d and the smaller number is %d\n", bigger, smaller);

	return 0;
}
