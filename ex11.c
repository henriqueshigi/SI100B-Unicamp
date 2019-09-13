//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 2 - Linguagem Estruturada e Introdução à Linguagem C

//ex11.c

#include <stdio.h>
int main () 
{	
	int idade;
	float altura;
	char genero;

	printf("Insira o seu sexo: F para Feminino ou M para masculino \n ");
		scanf("%c" , &genero);
	printf("Insira a sua idade: \n ");
		scanf("%d" , &idade); 
	printf("Insira a sua altura: \n ");
		scanf("%f" , &altura); 
	printf("Você tem %d anos, %.2f de altura e é do sexo %c: \n " , idade, altura, genero);

return 0;
}
  