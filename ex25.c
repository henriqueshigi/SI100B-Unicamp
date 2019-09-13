//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 5 - Vetores

//Vetores - ex25.c

#include <stdio.h>
int main()
{
	
	float nota[30]; //vetor com o numero de notas
	float total, media;
	int i; //indice
	
	for(i = 0; i < 30; i++)
	{
		printf("Insira nota do aluno %d: \n", i);
		scanf("%f", &nota[i]); //coleta as 30 notas
		total += nota[i]; //soma cada nota ao total	
	}	

	media = (total/30); //faz a media
	
	for(i = 0; i < 30; i++) //ve quais alunos tiveram nota acima da media e imprime 
	{
		if(nota[i] > media)
		{
			printf("O aluno %d ficou acima da media e teve %.2f pontos \n", i, nota[i]);
		}
	}


	return 0;
}