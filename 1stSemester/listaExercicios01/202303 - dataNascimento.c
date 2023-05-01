/* escreva um programa que receba em inteiro o dia, mes e ano de nascimento */

#include <stdio.h>

int main(){
	int dia, mes, ano;
	
	printf("Qual dia vc nasceu ?");
	scanf("%d",&dia);
	//printf("\nQual mes e ano vc nasceu?");
	//scanf("%d%d",&mes,&ano);
	printf("Qual mes vc nasceu ?");
	scanf("%d",&mes);
	
	printf("Qual ano vc nasceu ?");
	scanf("%d",&ano);
	
	printf("\nEu nasci no dia %d do mes %d do ano %d",dia,mes,ano);
}
