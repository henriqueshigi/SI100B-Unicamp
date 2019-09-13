//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 9B - Modularização de Programas

//Modularização de Programas - ex50.c
//Topico 9Bc - Valores

//Bibliotecas:
#include <stdio.h> //Padrão de entrada e saída

//Protótipo:
void procedimento(int num[], int tam);

//Criando uma estrutura para guardar o maior e menor valor:
typedef struct estrutura
{
	int maior, menor;
}estrut;

estrut numero;

#define N 100
int tam; //Tamanho do vetor
int i; //Indice, para uso no For

int main()
{
	int num[N];

	//Leitura do tamanho do vetor:
	scanf("%d", &tam);
	for(i = 0; i < tam; i++)
	{
		//Leitura dos elementos do vetor:
		scanf("%d", &num[i]);
	}

	//Chamando o procedimento:
	procedimento(num, tam); 

	//Imprimindo os resultados:
	printf("maior valor: %d\n", numero.maior);
	printf("menor valor: %d\n", numero.menor);

	return 0;
}

//Definindo a função:
void procedimento(int num[], int tam)
{
	int cem = 0;

	numero.maior = num[0];
	numero.menor = num[0];

	//Bubble Sort:
	while(cem < 100) //Dentro do while, pra rodar 100 vezes só por garantia
	{
		for(i = 0; i < tam; i++)
		{
			if(num[i] < numero.menor)
			{
				numero.menor = num[i];
			}
			else if(num[i] > numero.maior)
			{
				numero.maior = num[i];
			}
		}

	cem++;	
	}
}
