#include<stdio.h>

int main(){
	int nota1, nota2, media;

	printf("qual foi a sua nota1?");
	scanf("%d", &nota1);

	printf("\nqual foi sua nota2?");
	scanf("%d", &nota2);

	media=(nota1+nota2)/2;

	if(media == 10){
		printf("passed with honor");}
	else if((media>7)&&(media<=10)){
		printf("passed");}
	else{
		printf("reproved");}
}
