//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 10 - Alocação Dinâmica de Memória

//Alocação Dinâmica de Memória - ex51.c
//Tópico 10b - Matrizes simetricas

//Bibliotecas:
#include <stdio.h> //Padrão de entrada e saída
#include <stdlib.h> //Permite alocar e liberar memória dinamicamente

int main()
{
	int linhas, colunas;
	int *mat;
	int i, j;
	int matriz;
	int index = 0;
	int x = 0, y = 0;

	scanf("%d %d", &linhas, &colunas);

	//Alocando a matriz de forma dinamica
	mat = (int*) malloc((colunas*linhas)*sizeof(int));
			//1				//2
	//1 - Cast: converte para o tipo de 'mat'
	//2 - Cria o espaco correspondente a 'colunas*linhas' ints.

	//Preenchendo a matriz
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			scanf("%d", &matriz);
			index = i*colunas+j;
			mat[index] = matriz;
		}
	}

	//Verificando se eh simetrica
	index = 0;
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{ 
			x = i*colunas+j;
			y = j*colunas+i;
			if(mat[x] != mat[y]) //Se for diferente de sua transposta
			{
				index++;
				break;
			}
		}
	}

	if(index == 0)
	{
		printf("Eh simetrica\n");
	}
	else if(index > 0)
	{
		printf("Nao eh simetrica\n"); 
	}
	
	return 0;
}