//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 2 - Linguagem Estruturada e Introdução à Linguagem C

//ex08.c

#include <stdio.h>
int main() 
{
	int celsius, farenheit; 

	printf("Insira a temperatura em Celsius: \n"); 
		scanf("%d", &celsius);
		farenheit = (celsius*1.8)+32;
			printf("A temperatura em farenheit é: %d. \n", farenheit);  
return 0;
}
