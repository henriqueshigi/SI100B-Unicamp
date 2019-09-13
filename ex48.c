//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 9B - Modularização de Programas

//Modularização de Programas - ex48.c
//Topico 9Ba - 10 Valores

//Bibliotecas:
#include <stdio.h> //Padrão de entrada e saída
#include <math.h> //Funções matemáticas "pow()"

void procedimento(int a, int b); //Protótipo da função

int i; //Indice
int a[10], b[10]; //Vetores 'A' e 'B'

int main()
{
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]); //Devido ao laço for, escaneia 10 valores para A
	}

	for(i = 0; i < 10; i++)
	{
		procedimento(a[i], 0); //Chamada do procedimento 10 vezes, enviando o valor de a[i]
	}
	printf("\n"); //Imprime a quebra de linha no final dos laços

	return 0;
}

void procedimento(int a, int b) 
{
	b = pow(a, 3); //Eleva ao cubo
	printf("%d\n", b); //Imprime o valor de b

	return;
} 
