//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 8 - Registros

//Registros - ex40.c
//Topico 8a - Distancia euclidiana

#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <math.h> //Biblioteca para uso das funcoes matematicas

int main()
{
	struct Ponto
	{
		float x, y;
	} p1, p2;

	//Recebe as coordenadas dos dois pontos
	scanf("%f", &p1.x);
	scanf("%f", &p1.y);
	scanf("%f", &p2.x);
	scanf("%f", &p2.y);

	float dist;

	//Calcula a distancia euclidiana atraves da seguinte formula
	dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	if(dist > 00000001)
	{
		printf("Os pontos nao sao iguais \n");
	}
	else if(dist < 00000001)
	{
		printf("Os pontos sao iguais \n");
	} 

	return 0;
}	