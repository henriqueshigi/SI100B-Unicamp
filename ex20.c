//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex20.c

#include <stdio.h> 
int main () 
{
	float soma, sub, mult, div, a, b;
	char op; 

	printf ("Insira a operação no formato: a operador b \n"); 
	scanf ("%f%c%f", &a, &op, &b);  

	switch (op){
		case '+':   
		soma = (a + b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, soma);
		break;

		case '-':
		sub = (a - b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, sub);
		break;

		case '*': 
		mult = (a * b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, mult);
		break;

		case '/': 
		div = (a / b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, div);
		break;

		default: 
		printf ("Operador inválido :/ \n");}

	return 0; 
}   
