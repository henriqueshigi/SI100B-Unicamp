//Henrique Bergamo Shigihara 
//1Semestre 2019 - SI100B
//Tópico 9A - Modularização de Programas

//Modularização de Programas - ex45.c
//Topico 9Aa - Esfera

#include <stdio.h>

float volume_esfera(float r, float volume, float pi)
{

	volume = ((4*pi*(r*r*r))/3); //Formula do volume da esfera
	return volume; //Retorna 'volume'
}

int main()
{
	float r;
	scanf("%f", &r);
	float volume = volume_esfera(r, 0, 3.14159); //Envia esses valores para a funcao volume_esfera
	printf("%.2f \n",volume ); //Imprime o que retornou

	return 0;
}
