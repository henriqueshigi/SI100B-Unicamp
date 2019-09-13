//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex13.c
/* impar ou par*/

#include <stdio.h>
int main() 
{
	int number;
	
	printf ("Digite um número\n");
	scanf ("%d", &number);
	
	if (number % 2 == 0) 
		printf (" O número é par"); 
	else 
		printf ("O número é ímpar"); 

return 0;
}
