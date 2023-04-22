#include <stdio.h>

int main (){
	int dist;
	int gas;
	int consumo;
	
	printf("Qual a distancia percorrida? ");
	scanf("%d",&dist);
	
	printf("Quantos litros de gasolina gastou? ");
	scanf("%d",&gas);
	
	consumo = dist / gas;
	
	printf("O consumo de combustivel foi de %d km/l",consumo);
	
}
