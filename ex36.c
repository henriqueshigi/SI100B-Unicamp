//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 7 - Strings

//Strings - ex36.c
//Topico 7b - String invertida

#include <stdio.h> //Biblioteca padrao de entrada e saida
#include <string.h> //Biblioteca de manipulacao de cadeias de texto

int main()
{
	//Declarando as variaveis
	char string[81]; //Declara um vetor char com 81 espacos, devido ao '\0' (null)
	int i; //indice 

	//puts("Insira uma string: "); //teste
	fgets(string, 81, stdin); //le a string
	
			//11			//'-1' para excluir o (null)
	for(i = strlen(string) - 1; i >= 0; i--) //for para fazer ao contrario
	{					  //11
		printf("%c", string[i]); //imprime caractere por caractere
	}
		printf("\n"); //imprime quebra de linha ao final do for

	return 0;
}