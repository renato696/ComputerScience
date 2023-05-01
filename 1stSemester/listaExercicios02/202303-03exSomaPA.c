#include <stdio.h>

int main (){
	float dividendo, divisor, quociente, soma;
	dividendo = 1;
	divisor = 1;
	quociente;
	soma = 0;

	do {	
	    quociente = dividendo/divisor;
	    soma = soma+quociente;
	    dividendo = dividendo+2;
    	    divisor = divisor+1;}		
	 while (divisor <= 50);

	printf("a soma equivale a %.2f\n",soma); 

}
