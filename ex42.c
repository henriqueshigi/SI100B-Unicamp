//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 8 - Registros

//Registros - ex42.c
//Topico 8b - Retangulos contidos

#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <math.h> //Biblioteca para uso das funcoes matematicas

int main()
{
	struct Retangulo
	{
		int x, y;
	} ie1, sd1, ie2, sd2;
	//ie == inferior esquerdo
	//sd == superior direito

	//Inferior Esquerdo 1
	scanf("%d %d", &ie1.x, &ie1.y);
	//Superior Direito 1
	scanf("%d %d", &sd1.x, &sd1.y);

	//Inferior Esquerdo 2
	scanf("%d %d", &ie2.x, &ie2.y);
	//Superior Direito 2
	scanf("%d %d", &sd2.x, &sd2.y);

	/*								  
	_________________________________sd1
	|                               |
	|		     		     		|
	| ______________sd2            	|
	| | retangulo2 |				|
	| |			   |				|
	| |____________|  				|
	| ie2				retangulo1	|
	|  								|
	|_______________________________|
	ie1

	*/

	if((ie2.x >= ie1.x) && (ie2.y >= ie1.y) && (sd2.x <= sd1.x) && (sd2.y <= sd1.y))
	{
		printf("o segundo retangulo esta contido no primeiro \n");
	}
	else
	{
		printf("o segundo retangulo nao esta contido no primeiro \n");
	}

	return 0;
}
