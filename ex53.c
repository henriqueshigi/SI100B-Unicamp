//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 10 - Alocação Dinâmica de Memória

//Alocação Dinâmica de Memória - ex53.c
//Tópico 10c - Armazenar dados de um aluno

//Bibliotecas:
#include <stdio.h> //Padrão de entrada e saída
#include <stdlib.h> //Permite alocar e liberar memória dinamicamente
#include <string.h> //Manipulação de Strings

int main()
{
	int i, j; //Indices
	int num; //Numero de alunos
	int tam = 0; //Tamanho da string
	float media = 0; //Media das provas

	typedef struct aluno //Estrutura 'aluno'
	{
		char nome[102];
		int ra;
		float p1, p2;
	}alunos;

	alunos *al;

	scanf("%d", &num); //Recebe o numero de alunos
	getchar(); //Recebe o caractere para evitar que pule o proximo scanf

	al = (alunos*) malloc(num * sizeof(alunos)); //Alocando a estrutura dinamicamente

	for(i = 0; i < num; i++) //Laço for para preenchimento das estruturas com os dados dos 'num' alunos
	{
		fgets(al[i].nome, 102, stdin);
		scanf("%d", &al[i].ra);
		getchar();
		scanf("%f", &al[i].p1);
		getchar();
		scanf("%f", &al[i].p2);
		getchar();
	}

	for(i = 0; i < num; i++) //Imprimindo os resultados
	{
		printf("%d\t", al[i].ra);
		tam = strlen(al[i].nome);
		for(j = 0; j < tam; j++)
		{
			//Substitui o '\n' por '\t'
			if(al[i].nome[j] == '\n')
			{
				al[i].nome[j] = '\t';
				break;
			}
		}
		printf("%s", al[i].nome);
		media = (al[i].p1 + al[i].p2)/2;
		printf("%.2f\n", media);
		media = 0;
	}

	return 0;
}