//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 9A - Modularização de Programas

//Modularização de Programas - ex47.c
//Topico 9Ac - Calculadora

#include <stdio.h>
#include <math.h>

//Protótipos:
float soma(float x, float y);
float subtracao(float x, float y);
float multiplicacao(float x, float y);
float divisao(float x, float y);
float potencia(float x, float y);

int main()
{
	float x, y;
	char operador;
	float resultado;

	//printf("Calculadora com 5 operacoes! \n"); //Teste
	//printf("Digite numero operador numero \n"); //Teste
	scanf("%f%c%f", &x, &operador, &y);

	
	//If else para cada operador:
	if(operador == '+')
	{
		resultado = soma(x, y);
		printf("%.3f \n", resultado);
	}
	else if(operador == '-')
	{
		resultado = subtracao(x, y);
		printf("%.3f \n", resultado);		
	}
	else if(operador == '*')
	{
		resultado = multiplicacao(x, y);
		printf("%.3f \n", resultado);		
	}
	else if(operador == '/')
	{
		resultado = divisao(x, y);
		printf("%.3f \n", resultado);		
	}
	else if(operador == '^')
	{
		resultado = potencia(x, y);
		printf("%.3f \n", resultado);		
	}

	return 0;
}

//Funcoes:
//Recebem os valores de x e y, executam a operacao e retornam o resultado
float soma(float x, float y)
{
	float resultado;

	resultado = x + y;

	return resultado;
}

float subtracao(float x, float y)
{
	float resultado;

	resultado = x - y;

	return resultado;
}

float multiplicacao(float x, float y)
{
	float resultado;

	resultado = x * y;

	return resultado;
}

float divisao(float x, float y)
{
	float resultado;

	resultado = x / y;

	return resultado;
}

float potencia(float x, float y)
{
	float resultado;

	resultado = pow(x , y);

	return resultado;
}