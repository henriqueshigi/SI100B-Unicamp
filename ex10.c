//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 2 - Linguagem Estruturada e Introdução à Linguagem C

//ex10.c

#include <stdio.h>
int main() 
{
	int celsius, farenheit; 

	printf("Insira a temperatura em Farenheit: \n"); 
		scanf("%d", &farenheit);
		celsius = (farenheit-32)/1.8; 
			printf("A temperatura em Celsius é: %d. \n", celsius);  
return 0;
}
