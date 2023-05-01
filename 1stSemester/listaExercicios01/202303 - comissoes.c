#include <stdio.h>

int main (){
	char nome[10];
	float salario;
	float totalVendas;
	float comissoes;
	float salarioTotal;
	
	printf("Qual o nome do vendedor?");
	scanf("%s",&nome);
	
	printf("Qual o seu salario?");
	scanf("%f",&salario);
	
	printf("Qual o total de vendas?");
	scanf("%f",&totalVendas);
	
	comissoes = totalVendas*0.15;
	salarioTotal = salario + comissoes;
	
	printf("Seu ganho em comissoes foi de : %.2f",comissoes);
	printf("\nSeu salario total foi de R$ %.2f",salarioTotal);
	
}
