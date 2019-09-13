//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 9B - Modularização de Programas

//Modularização de Programas - ex49.c
//Topico 9Bb - Números Complexos

//Bibliotecas:
#include <stdio.h> //Padrão de entrada e saída

//Protótipos:
void soma(int a, int b, int c, int d);
void mult(int a, int b, int c, int d);

//Declarando as variáveis:
int a, b, c, d;
char operador;

int main()
{
	//Lendo os dados do usuário:
	scanf("%d %d %c %d %d", &a, &b, &operador, &c, &d);
	
	if(operador == '+')
	{
		//Se for soma, chama a função:
		soma(a, b, c, d); 
	}
	else if(operador == '*')
	{
		//Se for multiplicação, chama a função:
		mult(a, b, c, d);
	}

	return 0;
}

//Definindo as funções:
void soma(int a, int b, int c, int d)
{
	int sum1 = (a + c);
	int sum2 = (b + d);
	printf("%d + %di\n", sum1, sum2);

	return;
}

void mult(int a, int b, int c, int d)
{
	int mul1 = (a*c - b*d);
	int mul2 = (a*d + b*c);
	printf("%d + %di\n", mul1, mul2);

	return;
}