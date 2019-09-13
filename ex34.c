//Henrique Bergamo Shigihara
//1Semestre 2019 - SI100B
//Tópico 6 - Matrizes

//Matrizes - ex34.c
//Topico 6c

#define N 20 //define o maximo numero de N

#include <stdio.h>
int main()
{
	//os numeros vem la de cima, assim se precisar mudar o tamanho da matriz, fica mais facil.
	int m1[N][N]; //Matriz 1
	int m2[N][N]; //Matriz 2
	int m3[N][N]; //Matriz resultado da multiplicacao m1*m2
	//indices e numeros de linhas e colunas
	int i, j, k, temp, nlin1, ncol1, nlin2, ncol2; //declarando as variaveis 

	//nlin e ncol serao < 20
	//printf("Insira o numero de linhas e colunas da primeira matriz: \n");
		scanf("%d %d", &nlin1, &ncol1); 

	//printf("Agora insira o numero de linhas e colunas da segunda matriz: \n");
		scanf("%d %d", &nlin2, &ncol2);

		/*Para a multiplicacao de matrizes ocorrer:  
		O numero de colunas da primeira matriz tem que ser igual 
		ao numero de linhas da segunda matriz*/
		if(ncol1 == nlin2)
		{
			//Preenchendo as matrizes
			//printf("Vamos preencher a primeira matriz: \n");
			for (i = 0; i < nlin1; i++)
			{
				for(j = 0; j < ncol1; j++)
				{
					//printf("Insira o numero %i %i: \n", i, j);
					scanf("%d", &m1[i][j]);
				}
			}

			//printf("Agora vamos preencher a segunda matriz: \n");
			for (i = 0; i < nlin2; i++)
			{
				for(j = 0; j < ncol2; j++)
				{
					//printf("Insira o numero %i %i: \n", i, j);
					scanf("%d", &m2[i][j]);
				}
			}

			/*Para a multiplicacao de matrizes ocorrer:  
			O numero de colunas da primeira matriz tem que ser igual 
			ao numero de linhas da segunda matriz*/

			//Multiplicando as matrizes
			for (i = 0; i < nlin2; i++)
				{
					for(j = 0; j < ncol1; j++)
					{
						temp = 0;
					
						for(k = 0; k < nlin2; k++)
						{
							temp += (m1[i][k] * m2[k][j]); 
						}
						m3[i][j] = temp;
					}
				}

			//Imprimindo o resultado
			for (i = 0; i < nlin1; i++)
				{
					for(j = 0; j < ncol2; j++)
					{
						printf("%d ", m3[i][j]);
					}
					printf("\n");
				}

				printf("\n");
		}
		else 
			printf("As dimensoes das	duas	matrizes nao permitem	a	multiplicacao \n");

	return 0;
}
