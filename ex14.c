//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex14.c

#include <stdio.h> 
int main () 
{ 
	int a, b, c , d, e, f, g, h, i, j;
	int impar=0,par=0;
	int tp, te; 

	printf ("Insira 10 números inteiros: \n");
	scanf ("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e,  &f, &g, &h, &i, &j); 

	if ( a%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( b%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( c%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( d%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( e%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( f%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( g%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( h%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( i%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	if ( j%2 == 0) {
		printf ("%d é par \n", a);
		par++; }
	else {	printf("%d é ímpar \n", a);
		impar++;}

	printf("Foram inseridos %d números Ímpares e %d números Pares \n",impar,par);
	
	return 0; 
}
