#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    char letra;

    printf("digite uma letra para saber se trata-se de vogal ou consoante:\n");
    scanf("%c", &letra);

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("trata-se de uma vogal \n");
        break;
        default: printf("trata-se de uma consoante \n");
        break;
    };

}