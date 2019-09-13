//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 8 - Registros

//Registros - ex43.c
//Topico 8c - IMC

#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <math.h> //Biblioteca para uso das funcoes matematicas

int main()
{
	struct corpo
	{
		float altura;
		float peso;
		char nome[81];
	} p;

	//Recebe os dados
	scanf("%f", &p.altura);
	scanf("%f", &p.peso);
	fgets(p.nome, 81, stdin); //le o nome

	//Calculando o IMC segundo a formula
	float imc;
	imc = ((p.peso)/pow(p.altura, 2));

	//Imprimindo o resultado
	printf("%.3f \n", imc);

	return 0;
}	