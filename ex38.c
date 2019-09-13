//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 7 - Strings

//Strings - ex38.c
//Topico 7c - Palindromo, igual de tras pra frente

#include <stdio.h> //Biblioteca padrao de entrada e saida
#include <string.h> //Biblioteca de manipulacao de cadeias de texto

int main()
{
	//Declarando as variaveis
	char string[81]; //Declara um vetor char com 81 espacos, devido ao '\0' (null)
	int i; //indice
	int num; //Numero de caracteres da string
	int x = 0; //'X' indicara se e palindromo ou nao 

	//puts("Insira uma string: "); //teste
	fgets(string, 81, stdin); //le a string
	num = (strlen(string) - 2); //Atribui o numero de caracteres da string a variavel 'num'

	//Deixando o programa imune a letras maisculas e minusculas
	for(i = (strlen(string) - 1); i >= 0; i--)
	{	//Se for inserida uma letra maiscula o programa a torna minuscula
		if(string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] += 32;
		}
	}

	for(i = 0, num = (strlen(string) - 2); num >= 0; i++, num--)
	{	//percorre a string de frente pra tras e de tras pra frente
		if(string[num] == string[i])
		{
			x++;
		}
	}
	
	//Se x for igual ao numero de caracteres menos o \0, entao:
	if(x == (strlen(string) - 1))
	{
		printf("Esta palavra e um palindromo\n");
	}

	//Mas, se x for diferente do numero de caracteres menos o \0, entao:
	else if(x != (strlen(string) - 1))
	{
		printf("Esta palavra nao e um palindromo\n");
	}
			
	return 0;
}