/* escreva um programa que receba 3 notas e calcule a m�dia */

#include <stdio.h>

int main (){
	// fflush(stdout) comando para limpar a mem�ria
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	printf("Qual foi a sua primeira nota?");
	scanf("%f",&nota1);
	
	printf("\nQual foi a sua segunda nota?");
	scanf("%f",&nota2);
	
	printf("\nQual foi a sua terceira nota?");
	scanf("%f",&nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf("a media das suas notas: %.2f",media);
}
