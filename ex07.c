//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 2 - Linguagem Estruturada e Introdução à Linguagem C

//ex07.c

#include <stdio.h>
int main()
{
	float P1, P2, T, media;

	printf("Digite sua nota P1: ");
	scanf("%f",&P1);

	printf("Digite sua nota P2: ");
	scanf("%f",&P2);

	printf("Digite sua nota T: ");
	scanf("%f",&T);

	media = (P1 + P2 + T)/3;
		printf("Sua média final é %.0f.\n", media);

return 0;
}
