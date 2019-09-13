//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 4 - Estruturas de Controle - Repetição

//Trab_02 - Contando Números

#include <stdio.h>
int main () 
{ 
	int a=0; //A soma de todos os numeros pares nao primos que antecedem N;
	int b=0; //A soma de todos os numeros impares nao primos que antecedem N;
	int c=0; //A soma de todos os numeros primos que antecedem N.

	int n; //Numero inserido
	int x, y;
	int primo=0; // 0: nao eh primo / 1: eh primo
	int cont; //quantas vezes entrou
	
	scanf("%d", &n);

	for (x=1; x < n; x++) 
	{
		//estrutura pra saber se eh primo ou nao
		cont = 0;
		for (y = 2; y <= x; y++) 
		{ 
			// y divido por 2: o resto eh zero?
			if ((x%y == 0))
			{
				cont++;
			}
		}
		
			if (cont == 1)
			{
			primo = 1;
			}
			else primo = 0;
		
			if ((x%2 == 0) && (primo == 0)) 
			{
			a += x;
			}
			else if ((x%2 != 0) && (primo ==0)) 
			{
			b += x;
			}
			else if (primo == 1) 
			{
			c += x;
			}
	
	}

	b = b-1;
	
	printf ("%d %d %d \n", a , b, c);
		
		return 0;

	}
	