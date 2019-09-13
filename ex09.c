//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 2 - Linguagem Estruturada e Introdução à Linguagem C

//ex09.c

#include <stdio.h>
int main()
{
	char x, y;

	printf("Digite um caractere: ");
		scanf("%c", &x); 
		y = (x+1);
			printf("O caractere posterior à %c é %c : ", x, y);

return 0;
}
