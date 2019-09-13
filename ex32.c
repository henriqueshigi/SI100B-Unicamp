//Henrique Bergamo Shigihara
//1Semestre 2019 - SI100B
//Tópico 6 - Matrizes

//Matrizes - ex32.c
//Topico 6a

//Linguagem C conta a partir de 0

#define N 20 //define o maximo numero de N

#include <stdio.h>
int main()
{

	int m[N][N]; //os numeros vem la de cima, assim se precisar mudar o tamanho da matriz, fica mais facil.
	int i, j, nlin, ncol; //declarando as variaveis 

	//nlin e ncol serao < 20
	//printf("Insira o numero de linhas e colunas: \n");
		scanf("%d %d", &nlin, &ncol); 
	
		for (i = 0; i < nlin; i++)
		{
			for(j = 0; j < ncol; j++)
			{
				//printf("Insira o numero %i %i: \n", i, j);
				scanf("%d", &m[i][j]);
			}
		} printf("\n");

		//Aqui ja inverteu, pra fazer a transposta
		for (i = 0; i < /*nlin*/ ncol; i++)
		{
			for(j = 0; j < /*ncol*/ nlin; j++)
			{
				//printf("%i ", m[i][j]); //imprime a matriz normal | linha e coluna
				printf("%d ", m[j][i]); //imprime a matriz transposta | coluna e linha
			}
			
			printf("\n");
		}

		printf("\n");

	return 0;
}