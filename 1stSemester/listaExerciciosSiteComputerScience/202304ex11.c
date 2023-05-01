#include<stdio.h>

int main(){
	
	float salario, reajuste, aumento, novoSalario;

	printf("Digite seu salario: ");
	scanf("%f", &salario);

	if (salario <= 280.00){
		salario = salario;
		reajuste = 20.0;
		aumento = salario * 0.2;
		novoSalario = salario + aumento;
		printf("Seu salario antes do reajuste era R$ %.2f", salario);
		printf("\nO percetual de reajuste foi de %.2f por cento", reajuste);
		printf("\nO valor do aumento foi de R$ %.2f", aumento);
		printf("\nO novo salario eh R$ %.2f", novoSalario);}
	else if ((salario > 280.00)&&(salario <= 700.00)){
		salario = salario;
		reajuste = 15.0;
		aumento = salario * 0.15;
		novoSalario = salario + aumento;
		printf("Seu salario antes do reajuste era R$ %.2f", salario);
		printf("\nO percetual de reajuste foi de %.2f por cento", reajuste);
		printf("\nO valor do aumento foi de R$ %.2f", aumento);
		printf("\nO novo salario eh R$ %.2f", novoSalario);}
	else if ((salario > 700.00)&&(salario <=1500.00)){
		salario = salario;
		reajuste = 10.0;
		aumento = salario * 0.1;
		novoSalario = salario + aumento;
		printf("Seu salario antes do reajuste era R$ %.2f", salario);
		printf("\nO percetual de reajuste foi de %.2f por cento", reajuste);
		printf("\nO valor do aumento foi de R$ %.2f", aumento);
		printf("\nO novo salario eh R$ %.2f", novoSalario);}
	else {
		salario = salario;
		reajuste = 5.0;
		aumento = salario * 0.05;
		novoSalario = salario + aumento;
		printf("Seu salario antes do reajuste era R$ %.2f", salario);
		printf("\nO percetual de reajuste foi de %.2f por cento", reajuste);
		printf("\nO valor do aumento foi de R$ %.2f", aumento);
		printf("\nO novo salario eh R$ %.2f\n", novoSalario);}

		return 0;
}
