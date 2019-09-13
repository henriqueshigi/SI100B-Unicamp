//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 7 - Strings

//Strings - ex35.c
//Topico 7a - Total de caracteres

#include <stdio.h> //Biblioteca padrao de entrada e saida
#include <string.h> //Biblioteca de manipulacao de cadeias de texto

int main()
{
	char string[81]; //Declara um vetor char com 81 espacos, devido ao '\0' (null)
	int i; //indice 
	int total = 0;

	//puts("Insira uma string: "); //teste
	fgets(string, 81, stdin); //le a string

	for(i = 0; i < 81; i++) //for para percorrer o vetor(string)
	{
		if(string[i] == 0) //se encontrar uma string com valor (null)
		{
			total = i; //total vai receber o valor i daquele momento
			break; //para tudo
		}

	}
							//'-1' para excluir o (null)
	printf("%d \n", total - 1); //imprime o que foi armazenado em total, ou seja, 'i'

	return 0;
}