//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex17.c

#include <stdio.h> 
int main () 
{ 
	char c, m; 
	printf ("Insira um caractere: \n"); 
	scanf ("%c", &c); 

		if ((c >= 'a') && (c <='z')){ 
			m = c - 32;
				printf ("%c \n", m);}
		else if ((c >= 'A') && (c <='Z')){
			printf ("%c \n", c);}
		else 
			printf ("Caractere inválido \n");

return 0;
}
