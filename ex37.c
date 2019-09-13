//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 7 - Strings

//Strings - ex37.c

#include <stdio.h>
#include <string.h>

int main()
{

	char palavra[81];
	int tamanho;
	int i, j;
	int pa = 0;

	fgets(palavra, 81, stdin);

	//-2 devido ao \0 e \n
	tamanho = strlen(palavra) - 2;

	for(i = 0, j = tamanho ; i <= tamanho, j >= 0; j--, i++)
	{

		if(palavra[i] == palavra[j])
		{
			pa++; //se a letra for igual ao seu oposto, recebe +1
		}
	}

	if(pa - 1 == tamanho) //se o numero de +1s for igual ao tamanho
	{
		printf("Esta palavra EH um palindromo \n");
	}
	else
	{
		printf("Esta palavra NAO e um palindromo \n");
	}

	return 0;
}
