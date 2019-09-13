//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex27.c
//Tópico 5b

#include <stdio.h>
int main()
{
	int produto[10], quantidade = 0; //quantidade de produtos
	float valor[10], lucro = 0; //valores dos produtos

	int i;
	//insira a quantidade de cada produto vendido:
	for(i = 0; i < 10; i++)
	{
		//printf("produto %d \n", i);
		scanf("%d", &produto[i]);
		quantidade += produto[i];
	}

	//insira o valor de cada produto vendido:
	for(i = 0; i < 10; i++)
	{	
		//printf("valor %d \n", i);
		scanf("%f", &valor[i]);
		lucro += (valor[i]*produto[i]);
	}

	printf("O lucro foi de %.3f e a quantidade de produtos vendidos foi de %d \n", lucro, quantidade);
	

	return 0;
}