//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex15.c

#include <stdio.h> 
int main () 
{

	int dd, mm, ano;
	printf("Insira uma data no formato dd/mm/aaaa \n"); 
	scanf("%d/%d/%d", &dd, &mm, &ano); 

	if (mm == 1) {
		printf ("%d de Janeiro de %d \n", dd, ano);}

	else if (mm == 2) {
		printf ("%d de Fevereiro de %d \n", dd, ano);}

	else if (mm == 3) {
		printf ("%d de Março de %d \n", dd, ano);}

	else if (mm == 4) {
		printf ("%d de Abril de %d \n", dd, ano);}

	else if (mm == 5) {
		printf ("%d de Maio de %d \n", dd, ano);}

	else if (mm == 6) {
		printf ("%d de Junho de %d \n", dd, ano);}

	else if (mm == 7) {
		printf ("%d de Julho de %d \n", dd, ano);}

	else if (mm == 8) {
		printf ("%d de Agosto de %d \n", dd, ano);}

	else if (mm == 9) {
		printf ("%d de Setembro de %d \n", dd, ano);}

	else if (mm == 10) {
		printf ("%d de Outubro de %d \n", dd, ano);}

	else if (mm == 11) {
		printf ("%d de Novembro de %d \n", dd, ano);}

	else if (mm == 12) {
		printf ("%d de Dezembro de %d \n", dd, ano);}

	else if ((mm < 1) && (mm > 12)) 
		printf ("Mês inválido\n");

	return 0; 
}
