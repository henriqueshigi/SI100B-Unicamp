//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 9A - Modularização de Programas

//Modularização de Programas - ex46.c
//Topico 9Ab - Media

#include <stdio.h>
#include <math.h>

float media(); //Protótipo: pois toda funcao deve ser declarada antes de ser usada

int main()
{
	printf("%.3f \n", media()); //Chama a funcao 'media' Imprime o resultado

	return 0;
}

float media()
{
	float x, y; 
	char c;
	float resultado;

	scanf("%c", &c);
	scanf("%f %f", &x, &y);

	if((c == 65.00) || (c == 97.00)) //De acordo com a tabela ASCII, se for 'A' ou 'a'
	{
		resultado = ((x+y)/2);
	}
	else if((c == 66.00) || (c == 98.00)) //De acordo com a tabela ASCII, se for 'B' ou 'b'
	{
		resultado = sqrt(x*y);
	}

	return resultado; //A funcao retorna o resultado
}