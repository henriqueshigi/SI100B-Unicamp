//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex30.c

#include <stdio.h>
int main()
{
	int vetor1[8]; //armazena
	int vetor2[8]; //positivos
	int vetor3[8]; //negativos
	int i; //indice

	for(i = 0; i < 8; i++)
	{
		printf("Inserir %d vetor1 \n", i+1);
		scanf("%d", &vetor1[i]); //escaneia os numeros do vetor1
	}

	for(i = 0; i < 8; i++)
	{
		if(vetor1[i] > 0) //se for maior que zero, armazena no vetor2 e zera o vetor3
		{
			vetor2[i] = vetor1[i];
			vetor3[i] = 0;
		} 

		else if (vetor1[i] < 0) //se for menor que zero, armazena no vetor3 e zera o vetor 2
			{
				vetor3[i] = vetor1[i];
				vetor2[i] = 0;
			}
			
			else //se for zero, zera os dois vetores
			{
				vetor2[i] = 0;
				vetor3[i] = 0;
			}
	}

	for(i = 0; i < 8; i++)
	{
		printf("%d vetor1 %d | vetor2 %d | vetor3 %d \n", i+1, vetor1[i], vetor2[i], vetor3[i]);
	}
	
	return 0;
}