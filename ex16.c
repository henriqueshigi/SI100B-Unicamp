//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex16.c

#include <stdio.h> 
int main () 
{
	int dd, mm, ano;
	printf("Insira uma data no formato dd/mm/aaaa \n"); 
	scanf("%d/0%d/%d", &dd, &mm, &ano); 

	switch (mm) {

	case 1: 
		printf ("%d de Janeiro de %d \n", dd, ano);
		break; 

	case 2:
		printf ("%d de Fevereiro de %d \n", dd, ano);
		break;

	case 3:
		printf ("%d de Março de %d \n", dd, ano);
		break;

	case 4:
		printf ("%d de Abril de %d \n", dd, ano);
		break;

	case 5:
		printf ("%d de Maio de %d \n", dd, ano);
		break;

	case 6:
		printf ("%d de Junho de %d \n", dd, ano);
		break;

	case 7:
		printf ("%d de Julho de %d \n", dd, ano);
		break;

	case 8:
		printf ("%d de Agosto de %d \n", dd, ano);
		break;

	case 9:
		printf ("%d de Setembro de %d \n", dd, ano);
		break;

	case 10:
		printf ("%d de Outubro de %d \n", dd, ano);
		break;

	case 11:
		printf ("%d de Novembro de %d \n", dd, ano);
		break;

	case 12:
		printf ("%d de Dezembro de %d \n", dd, ano);
		break;

	default: 
		printf ("Mês inválido \n");

}
	return 0; 
}
