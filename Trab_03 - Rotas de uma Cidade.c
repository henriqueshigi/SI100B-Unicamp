//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 6 - Matrizes

//Trab_03 - Rotas de uma Cidade

/* 
ENUNCIADO:
construir um programa que receba como entrada um número inteiro N, 
correspondente à quantidade de cidades a ser considerada, 
o grafo representativo das cidades e de seus relacionamentos (caminhos) 
e as cidades inicial (ponto de partida) e final (destino) da rota. 
A partir destes dados, seu programa deve encontrar a melhor rota 
entre as cidades inicial e final, seguindo a abordagem gulosa, 
e exibir na saída o custo da rota encontrada e o caminho percorrido. 
Estas saídas devem seguir o formato abaixo, onde INICIAL e FINAL 
são as cidades de início e destino, RESULTADO é o custo da rota e X, Y e Z 
indicam as cidades percorridas:

Menor distancia gulosa entre os nos INICIAL e FINAL:: RESULTADO

Caminho:: X->Y->Z 
*/

#define N 100

#include <stdio.h>

int main ()
{
	int matriz[N][N]; //Matriz recebe N como o numero de elementos
	int numcidades; //quantidade de cidades a ser considerada
	int i, j; //linhas e colunas do grafo(matriz)
	int inicial, final; //cidades inicial (ponto de partida) e final (destino) da rota
	int custo = 0; //custo do caminho, jah recebe 0
	int menor, caminho[N]; //menor para ser trocado e historico do caminho
	int x = -1; //Para guardar o valor anterior

	//printf("Insira o numero de cidades: \n"); //teste
	scanf("%d", &numcidades);

	//Laço for para o preenchimento da matriz
	for(i = 0; i < numcidades; i++)
	{
		for(j = 0; j < numcidades; j++)
		{
			//printf("Insira o valor para a matriz[%d][%d] \n", i, j); //teste
			scanf("%d", &matriz[i][j]);
		}
	}

	//printf("insira o ponto inicial: \n"); //teste
	scanf("%d", &inicial); 

	//printf("insira o ponto final: \n"); //teste
	scanf("%d", &final);

	//Abordagem gulosa
	if(inicial == final) //se a cidade inicial for igual a final, para
	{
		printf("inicial==final \n"); //teste
	}
	
	else if(inicial != final)
	{
		//ache o menor
		caminho[0] = inicial; //o primeiro caminho recebe o local de inicio
		
		i = 1; //'i' passa de 0 pra 1
		
		while(caminho[i-1] != final) //enquanto nao chegar ao final, faz:
		{
			menor = 97884979; //menor recebe um valor alto, para o if ocorrer
			
			for(j = 0; j < numcidades; j++) //colunas
			{
				//se a matriz for menor que o 'menor', for maior que zero, indicando que o caminho existe e for diferente do anterior, faz:
				if((matriz[caminho[i-1]][j] < menor) && (matriz[caminho[i-1]][j] > 0) && (x != j))
				{
					menor = matriz[caminho[i-1]][j]; //menor recebe o menor valor
					caminho[i] = j; //a coluna em que entrou no if eh guardada no historico
					
				} 
				
					//printf("%d %d %d %d %d\n", j, caminho[i-1], menor, caminho[i], custo); //teste
					
			} 

				i += 1; //i recebe o incremento pra ir pra proxima linha
				custo += menor; //o custo recebe o menor valor, soma
				x = caminho[i - 2];
				
					if(i==numcidades){break;} //se as linhas chegarem ao numero de cidades para a execucao

		}
	}
	
	//Imprimindo o resultado
	printf("Menor distancia gulosa entre os nos %d e %d:: %d \n", inicial, final, custo);
	printf("Caminho:: ");

	if(inicial == 0)
	{	
		for(j = 0; j < i-1; j++)
		{
			printf("%d->", caminho[j]);
		}	
			printf("%d \n", final);
	}
	
	else if(inicial > 0)
	{
		for(j = 0; j < i-1; j++)
		{
			printf("%d->", caminho[j]);
		}	
			printf("%d \n", final);
	}
	
return 0;
}
