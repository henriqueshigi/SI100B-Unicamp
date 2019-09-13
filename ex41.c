//Henrique Bergamo Shigihara
//1Semestre 2019 - SI100B
//Tópico 8 - Registros

//Registros - ex41.c - Retangulo

#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <math.h> //Biblioteca para uso das funcoes matematicas

int main()
{
	struct Retangulo
	{
		float x, y;
	} p1, p2;

	//Inferior Esquerdo
	scanf("%f", &p1.x);
	scanf("%f", &p1.y);
	//Superior Direito
	scanf("%f", &p2.x);
	scanf("%f", &p2.y);

	

	float area;
	area = sqrt(pow(p1.x - p2.x, 2) * pow(p1.y - p2.y, 2));

	printf("%.2f", area);

	return 0;
}
