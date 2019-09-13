//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 6 - Matrizes

//Matrizes - ex33.c
//Topico 6b

#define N 20 //define o maximo numero de N

#include <stdio.h>
int main()
{

	int m[N][N]; //os numeros vem la de cima, assim se precisar mudar o tamanho da matriz, fica mais facil.
	int i, j, nlin, ncol; //declarando as variaveis 

	//nlin e ncol serao < 20
	//printf("Insira o numero de linhas e colunas: \n");
		scanf("%i %i", &nlin, &ncol); 

		for (i = 0; i < nlin; i++)
		{
			for(j = 0; j < ncol; j++)
			{
				//printf("Insira o numero %i %i: \n", i, j);
				scanf("%i", &m[i][j]);
			}
		}

		for (i = 0; i < nlin; i++)
		{
			for(j = 0; j < ncol; j++)
			{
				printf("%i ", m[i][j]); //imprime a matriz normal | linha e coluna
			}
		}

		printf("\n");

	return 0;
}
