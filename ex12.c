//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 2 - Linguagem Estruturada e Introdução à Linguagem C

//ex12.c

#include <stdio.h> 
int main () 
{
	char nome;
	int idade;
	int dias;

	printf ("Qual é a primeira letra do seu nome? \n");
		scanf ("%c" , &nome);
	printf ("Qual é a sua idade? \n"); 
		scanf ("%d", &idade);
		dias = (idade * 365); 
	printf (" ");
		printf (" %c , a sua idade em dias é %d.\n" , nome, dias);

return 0;
}   
