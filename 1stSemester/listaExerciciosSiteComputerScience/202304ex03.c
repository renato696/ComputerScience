#include<stdio.h>

int main(){

	char sexo;

	printf("digite M para sexo masculino, F para sexo feminino\n");
	scanf("%c", &sexo);

	if(sexo == "M"){
		printf("vc selecionou sexo masculino");}
	else if (sexo == "F"){
		printf("vc selecionou sexo feminino");}
	else{
		printf("vc selecionou sexo invalido");}
}
