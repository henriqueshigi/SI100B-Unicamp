//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 8 - Registros

//Registros - ex39.c

#include <stdio.h>
#include <string.h> //Biblioteca com funcoes de manipulacao de strings
#include <math.h> //Biblioteca cm funcoes matematicas

int main()
{
	struct ponto
	{
		float x, y;
	} p1, p2;

	scanf("%f", &p1.x);
	scanf("%f", &p1.y);
	scanf("%f", &p2.x);
	scanf("%f", &p2.y);

	float dist;

	dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	printf("A distancia euclidiana eh: %d \n", dist);

	return 0;
}
