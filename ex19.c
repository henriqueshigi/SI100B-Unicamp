//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex19.c

#include <stdio.h> 
int main () 
{
	float soma, sub, mult, div, a, b;
	char op; 

	printf ("Insira a operação no formato: a operador b \n"); 
	scanf ("%f%c%f", &a, &op, &b);  

	if (op == '+'){ 
	soma = (a + b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, soma);}

	else if (op == '-'){ 
	sub = (a - b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, sub);}

	else if (op == '*'){ 
	mult = (a * b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, mult);}

	else if (op == '/'){ 
	div = (a / b); 
		printf ("%.2f %c %.2f = %.2f \n", a, op, b, div);}

	else{
		printf ("Operador inválido :/ \n");}

	return 0; 
}   
