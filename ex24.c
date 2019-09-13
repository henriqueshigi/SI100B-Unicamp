//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex24.c

#include <stdio.h>
int main()
{
	int vetor[21], quadrado[21];
	int i, j, temp;

	for(i = 1; i <= 20; i++)
	{
		quadrado[i] = i*i;   
	}

	for(j = 20; j > 0; j--)
	{
		for(i = 1; i < j; i++)
		{
		if(quadrado[i] < quadrado[i +1])
			{
			temp = quadrado[i];
			quadrado[i] = quadrado[i+1];
			quadrado[i+1] = temp;
			}
		}
	}

	for(i = 1; i <= 20; i++)
	{
		printf("i^2 = %d \n" , quadrado[i]);   
	}

	return 0;
}