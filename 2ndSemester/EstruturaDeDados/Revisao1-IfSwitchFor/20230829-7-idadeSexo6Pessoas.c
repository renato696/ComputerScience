/* crie um algoritmo que leia a idade e sexo de 6 pessoas e mostre:
- a media das idades
- a porcentageem de maiores de idades
- a porcentagem de menores de idade
- a porcentagem de mulheres maiores de idade*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float idade, soma = 0, contMaior = 0, contMenor = 0, contMulheresMaior = 0;
    float media, porcentagemMaiores, porcentagemMenores, porcentagemMulheresMaiores;
    int i, sexo;

    printf("Idade e sexo de 6 pessoas:");

    for (i = 1; i <= 6; i++){
        printf("\nDigite a idade da %da. pessoa: ", i);
        scanf("%f", &idade);
        printf("\nDigite o sexo da %da. pessoa sendo [0] - M | [1] - F: ", i);
        scanf("%d", &sexo);
        soma = soma + idade; //ou. soma += idade
            if(idade >=18){
                contMaior++;
                if(sexo == 1){
                    contMulheresMaior++;
                }
            } else {
                contMenor++;}
    }

    media = soma / 6;
    porcentagemMenores = (100 * contMenor) / 6;
    porcentagemMaiores = (100 * contMaior) / 6;
    porcentagemMulheresMaiores = (100 * contMulheresMaior) / 6;

    system("cls");

    printf("\nMedia das idades: %.2f", media);
    printf("\nPorcentagem de menores de idade: %.2f%%", porcentagemMenores);
    printf("\nPorcentagem de maiores de idade: %.2f%%", porcentagemMaiores);
    printf("\nPorcentagem de mulheres, maiores de idade: %.2f%%", porcentagemMulheresMaiores);
}  