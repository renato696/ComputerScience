#include <stdio.h>

int main(){
	//fflush(stdin);
	//fflush(stdout);
	
	int number1;
	int number2;
	int sum;
	int sub;
	int multi;
	int division;
	
	printf("type the first number: ");
	scanf("%d",&number1);
	
	printf("type the second number: ");
	scanf("%d",&number2);
	
	sum = number1 + number2;
	sub = number1 - number2;
	multi = number1 * number2;
	division = number1 / number2;

	printf("\nthe sum of your numbers is: %d",sum);
	printf("\nthe subtraction of your numbers is: %d",sub);
	printf("\nthe multiply of your numbers is: %d",multi);
	printf("\nthe division of your numbers is: %d",division);
}
