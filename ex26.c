//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex26.c
//Tópico 5a

#include <stdio.h>
int main()
	{

	//definição das variaveis
	float notas[20]/*criação do vetor com 20 elementos*/, n = 0;
	int x, y;
	
	//printf(‘‘Entre com as 20 notas:\n’’);
	for (x = 0; x < 20; x++) 
		{
		scanf("%f",&notas[x]); //notas guardadas em 20 variaveis
		}	
	
		
	//criação do loop	
	while (n >= 0)
	{
		y = 0;

		scanf("%f", &n); //escaneia o numero para buscar
			if (n < 0) //se o numero inserido for negativo o programa para sem imprimir nada
				{
					break;
				}
		
		for (x = 0; x < 20; x++) //faz a busca
			{	
				if (notas[x] == n) //se existir adiciona mais 1 ao y
				y++;
			}

		if (y > 0) //se o y for maior que zero, ou seja, existir ele printa "existe"
			{
				printf("existe \n");
			}
				else //caso contrario, printa nao existe
					//depois repete o processo até que seja inserido um número negativo
					{
						printf("nao existe \n");
					}
	}	

	return 0;
}