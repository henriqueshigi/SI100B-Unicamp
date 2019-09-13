//Henrique Bergamo Shigihara
//1Semestre 2019 - SI100B
//Tópico 10 - Alocação Dinâmica de Memória

//Alocação Dinâmica de Memória - ex52.c
//Tópico 10a - Coeficiente 

//Bibliotecas:
#include <stdio.h> //Padrão de entrada e saída
#include <stdlib.h> //Permite alocar e liberar memória dinamicamente

int main()
{

	int grau; //Grau do Polinômio
	int i; //Indice
	float* coeficiente;
	float x; //Sera lido para retornar o valor resultante
	int tam = 0;
	float resultado = 0;

	scanf("%d", &grau);
	tam = grau + 1;
	coeficiente = (float*) malloc(tam*sizeof(float));
					//1		//2
	//1 - Cast: converte para o tipo de 'coeficiente'
	//2 - Cria o espaco correspondente a 'tam' floats.

	if(coeficiente == NULL) //Verifica se a criacao se deu sem problemas
	{ 
    	printf("Memoria insuficiente");
    	return 1; //Retorna um código de erro para o S.O.
    }

    //Laço for para preencher o vetor de coeficientes
    for(i = 0; i < tam; i++)
    {
    	scanf("%f", &coeficiente[i]);
    }

    //Recebe o valor de x
    scanf("%f", &x);

   	i = grau;

   	while(i >= 0)
   	{
   		resultado = coeficiente[i] + x*resultado;
   		i--;
   	}

   	printf("%.2f\n", resultado);

    free(coeficiente); //Libera o espaco alocado a 'coeficiente'
	
	return 0;
}