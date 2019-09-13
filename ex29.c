//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex29.c
//Tópico 5c

#include <stdio.h>
int main()
{
	int vetor1[10], vetor2[10];
	int i;

	for(i = 0; i < 10; i++)
	{
		scanf("%d", &vetor1[i]);
	}

	for(i = 0; i < 10; i++)
	{
		scanf("%d", &vetor2[i]);
	}

	
	printf("%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d| \n", vetor1[0], vetor2[0], vetor1[1], vetor2[1], vetor1[2], vetor2[2], vetor1[3], vetor2[3], vetor1[4], vetor2[4], vetor1[5], vetor2[5], vetor1[6], vetor2[6], vetor1[7], vetor2[7], vetor1[8], vetor2[8], vetor1[9], vetor2[9]);
	
	return 0;
}