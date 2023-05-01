#include<stdio.h>

int main(){
	float valorHoras, horasTrab, salarioBrt, sindicato, irPerc, irValor, inss, fgts, totalDesc, salarioLiq;

	printf("Qual o valor da hora trabalhada?");
	scanf("%f", &valorHoras);

	printf("\nQual a quantidade de horas trabalhadas?");
	scanf("%f", &horasTrab);

	salarioBrt = valorHoras * horasTrab;
	sindicato = salarioBrt*0.03;

	if(salarioBrt < 900.00){
		irPerc = 0;
		irValor = salarioBrt * irPerc;
		inss = salarioBrt * 0.1;
		fgts = salarioBrt * 0.11;
		totalDesc = sindicato + irValor + inss;
		salarioLiq = salarioBrt - totalDesc;
		printf("\nSalario Bruto R$ %.2f", salarioBrt);
		printf("\nSindicato R$ %.2f", sindicato);
		printf("\nO percentual de descondo do IR foi de %.2f %%", irPerc);
		printf("\nImposto de Renda R$ %.2f", irValor);
		printf("\nINSS R$ %.2f", inss);
		printf("\nFGTS R$ %.2f", fgts);
		printf("\nTotal dos descontos R$ %.2f", totalDesc);
		printf("\nSalario Liquido R$ %.2f\n", salarioLiq);}
	else if((salarioBrt >= 900.00)&&(salarioBrt < 1500.00)){
		irPerc = 5;
		irValor = salarioBrt * (irPerc/100);
		inss = salarioBrt * 0.1;
		fgts = salarioBrt * 0.11;
		totalDesc = sindicato + irValor + inss;
		salarioLiq = salarioBrt - totalDesc;
		printf("\nSalario Bruto R$ %.2f", salarioBrt);
		printf("\nSindicato R$ %.2f", sindicato);
		printf("\nO percentual de descondo do IR foi de %.2f %%", irPerc);
		printf("\nImposto de Renda R$ %.2f", irValor);
		printf("\nINSS R$ %.2f", inss);
		printf("\nFGTS R$ %.2f", fgts);
		printf("\nTotal dos descontos R$ %.2f", totalDesc);
		printf("\nSalario Liquido R$ %.2f\n", salarioLiq);}
	else if((salarioBrt >= 1500.00)&&(salarioBrt < 2500.00)){
		irPerc = 10;
		irValor = salarioBrt * (irPerc/100);
		inss = salarioBrt * 0.1;
		fgts = salarioBrt * 0.11;
		totalDesc = sindicato + irValor + inss;
		salarioLiq = salarioBrt - totalDesc;
		printf("\nSalario Bruto R$ %.2f", salarioBrt);
		printf("\nSindicato R$ %.2f", sindicato);
		printf("\nO percentual de descondo do IR foi de %.2f %%", irPerc);
		printf("\nImposto de Renda R$ %.2f", irValor);
		printf("\nINSS R$ %.2f", inss);
		printf("\nFGTS R$ %.2f", fgts);
		printf("\nTotal dos descontos R$ %.2f", totalDesc);
		printf("\nSalario Liquido R$ %.2f\n", salarioLiq);}
	else {
		irPerc = 20;
		irValor = salarioBrt * (irPerc/100);
		inss = salarioBrt * 0.1;
		fgts = salarioBrt * 0.11;
		totalDesc = sindicato + irValor + inss;
		salarioLiq = salarioBrt - totalDesc;
		printf("\nSalario Bruto R$ %.2f", salarioBrt);
		printf("\nSindicato R$ %.2f", sindicato);
		printf("\nO percentual de descondo do IR foi de %.2f %%", irPerc);
		printf("\nImposto de Renda R$ %.2f", irValor);
		printf("\nINSS R$ %.2f", inss);
		printf("\nFGTS R$ %.2f", fgts);
		printf("\nTotal dos descontos R$ %.2f", totalDesc);
		printf("\nSalario Liquido R$ %.2f\n", salarioLiq);}


}
