//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex31.c

//programa que le 10 numeros e os exibe em ordem decrescente na tela
#include <stdio.h>
int main() {

	int vetor[10];
	int i,j,temp;

		for(i = 0; i < 10; i++)
		{
			printf("Insira o %d numero: \n", i+1);
			scanf("%d", &vetor[i]);
		} 



		for (j = 9; j > 0; j--) 
		{//j: limite da última posição

			for (i=0; i < j; i++)
			{// Compara par a par:
		
				if (vetor[i] < vetor[i+1]) //bubble sort em ordem decrescente
				{
					temp = vetor[i];
					vetor[i] = vetor[i+1];
					vetor[i+1] = temp;
				}
			}
		}

		for(i = 0; i < 10; i++)
		{
			printf("%d \n", vetor[i]);
		} 
	
	return 0;
}