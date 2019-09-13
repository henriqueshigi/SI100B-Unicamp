//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex28.c

#include <stdio.h>
int main()
{
	float mes[12], total, media; //temperatura media de cada mes do ano
	int i, j, temp; 

	for(i = 0; i < 12; i++)
	{
		printf("Temperatura media do mes %d: \n", i+1);
		scanf("%f", &mes[i]);
		total += mes[i]; 
	}

	for (j = 11; j >= 0; j--) 
	{ //j: limite da última posição

		for (i = 0; i < j; i++)
		{
			// Compara par a par:
			if (mes[i] > mes[i+1]) //se o mes anterior for maior que o posterior substitui
			{
				temp = mes[i]; //armazena em uma variavel temporaria
				mes[i] = mes[i+1];
				mes[i+1] = temp;
			}
			//deixa na ordem crescente
		}
	}


	media = (total/12);

	printf("Maior %.2f | Menor %.2f | Media %.2f \n", mes[11], mes[0], media);

	return 0;
}