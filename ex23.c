//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 4 - Estruturas de Controle - Repetição

//ex23.c

#include <stdio.h>
int main () 
{
	int x,y;
	int impar=0;
	int par=0;

	//printf ("Insira 10 números inteiros: \n");//
	for (x=1; x <= 10; x++)
	{

	scanf("%d",&y);

	if ( y%2 == 0) {
		
		par++; }
	else {	
		impar++; }
	}
	printf("%d pares, %d impares\n",par, impar);

	return 0;
}
