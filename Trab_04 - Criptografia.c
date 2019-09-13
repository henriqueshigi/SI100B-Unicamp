//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 9A - Modularização de Programas

//Trab_04 - Criptografia

//Incluindo as bibliotecas:
#include <stdio.h> //Padrao de entrada e saida
#include <string.h> //Manipulaçao de strings

int main() //Cabeçalho da funçao principal
{
	int x = 1; //Variavel para fazer o loop
	int input; //Input do usuário;
	
	//Estrutura para guardar nome, departamento, mensagem e id do usuario
	typedef struct agente
	{
		char nome[102];
		char departamento[61];
		char mensagem[42]; //Criptografar!
		int id;
	} Agente;

	Agente msg[1000]; //Para armazenar ate 1000 mensagens

	char descriptografar[42]; //Declarando a variavel para descriptografar

	//Indices
	int i = 0;
	int j = 0;
	
	while(x == 1) //Loop infinito, ate que o usuario aperte '0'
	{
		printf("****MENU DE CRIPTOGRAFIA****\n");
		printf("1: Criptografar mensagem\n");
		printf("2: Encontrar padroes\n");
		printf("3: Descriptografar mensagem\n");
		printf("4: Visualizar todas as mensagens\n");
		printf("0: Sair!\n");
		scanf("%d", &input);
		getchar(); //Pra não pular um case devido ao \n;
		
		switch(input)
		{
			case 0:
			{
				x = 0;
				break;
			}

			case 1:
			{
				printf("****ADICIONAR MENSAGEM****\n");
				printf("Digite o nome do agente:\n");
		
				fgets(msg[i].nome, 102, stdin);
				
				printf("Digite o departamento:\n");
				fgets(msg[i].departamento, 61, stdin);
				printf("Digite a mensagem a ser criptografada:\n");
				fgets(msg[i].mensagem, 42, stdin);
				
				//Criptografar a msg!
				int tamanho = strlen(msg[i].mensagem) - 1; //Tamanho recebe o comprimento da string-1, devido ao \0
				char cod[42];
				strcpy(cod, msg[i].mensagem); //a string 'msg[i].mensagem' é copiada para 'cod'
				for(j = 0; j < tamanho; j++)
				{
					//Números correspondentes a tabela ASCII
					if(cod[j] != 32)
					{
						cod[j] += 5;
					}
					if((cod[j] > 90) && (cod[j] < 97) && (cod[j] != 32))
					{				
						cod[j] -= 26;
					}
					else if((cod[j] > 122) && (cod[j] != 32))
					{
						cod[j] -= 26;
					}
				}
				strcpy(msg[i].mensagem, cod);
				//

				printf("Digite o numero de identificacao do agente:\n");
				scanf("%d", &msg[i].id);
				
				i++;
				
				break;
			}

			case 2:
			{
				char padrao[42]; //a ser encontrado
				printf("****ENCONTRAR PADROES****\n");
				printf("Digite o padrao a ser encontrado:\n");
				fgets(padrao, 42, stdin);

				//Criptografar a msg!
				//O programa criptografa automaticamente a msg que o usuario quer encontrar
				int tamanho = strlen(padrao) - 1;
				char cod[42];
				strcpy(cod, padrao);
				for(j = 0; j < tamanho; j++)
				{
					if(cod[j] != 32)
					{
						cod[j] += 5;
					}

					if((cod[j] > 90) && (cod[j] < 97) && (cod[j] != 32))
					{
						cod[j] -= 26;
					}
					else if((cod[j] > 122) && (cod[j] != 32))
					{
						cod[j] -= 26;
					}
				}
				strcpy(padrao, cod);
				//

				//Encontrando:
				int nmsgs = 0;
				int tam = strlen(padrao) - 2;

				int index = 0;
				int cont = 0; 
				for(j = 0; j < i; j++)
				{
					int tam2 = strlen(msg[j].mensagem) - 1;
					if(strcmp(padrao, msg[j].mensagem) == 0) //Busca == msg
					{
						nmsgs++; //Se a msg for igual o padrao procurado, 'nmsgs' recebe um incremento
					}
					else 
					{	
						index = 0;
						cont = 0;
						while((index <= tam) && (cont <= tam2)) 
						{
							if(padrao[index] == msg[j].mensagem[cont])
							{
								index++;
							}
							else
							{
								index = 0;
							}
							cont++;
						}					
						if(index == tam + 1)
						{
							nmsgs++;
						}
					}
				}
				
				if(nmsgs > 0)
				{
					printf("****Padrao encontrado em %d mensagens!****\n", nmsgs);
				}
				else
				{
					printf("****Padrao nao encontrado!****\n");
				}

				break;

			}

			case 3:
			{
				printf("****DESCRIPTOGRAFAR MENSAGEM****\n");
				printf("Digite a mensagem criptografada:\n");
				fgets(descriptografar, 42, stdin);
				char cod[42];
				char padrao[42]; //a ser encontrado
				strcpy(padrao, descriptografar);
				strcpy(cod, descriptografar);

				//descriptografar a msg!
				int tamanho = strlen(descriptografar) - 1;
							
				for(j = 0; j < tamanho; j++)
				{
					if(cod[j] != 32)
					{
						cod[j] -= 5;
					}
					
					if((cod[j] < 65) && (cod[j] != 32))
					{
						cod[j] += 26;
					}
					else if((cod[j] > 90) && (cod[j] < 97) && (cod[j] != 32))
					{
						cod[j] -= 26;
					}
					else if((cod[j] > 122) && (cod[j] != 32))
					{
						cod[j] -= 26;
					}
				}
				strcpy(descriptografar, cod);
				//

				//Encontrando:
				int ifi = 0;
				for(j = 0; j < i; j++)
				{
					if(strcmp(padrao, msg[j].mensagem) == 0) //Busca == msg
					{
						printf("%s", msg[j].nome); //Quebra linha "sozinho"
						printf("%s", msg[j].departamento);
						printf("%s", descriptografar);
						printf("%d\n", msg[j].id);
						ifi++;
						break;
					}
					
				}
				if(ifi == 0)
				{
					printf("****Mensagem nao encontrada!****\n");
				}

				break;
			}
			
			case 4:
			{
				if(i > 0) //Se existirem dados:
				{
					printf("****VISUALIZAR TODAS AS MENSAGENS****\n");
					for(j = 0; j < i; j++)
					{	
						printf("%s", msg[j].nome); //Quebra linha "sozinho"
						printf("%s", msg[j].departamento);
						printf("%s", msg[j].mensagem);
						printf("%d\n", msg[j].id);
					}
				}
				else //Se não existirem dados registrados:
				{
					printf("****Sistema Vazio!****\n");
				}
			}
			
			default:
			if(input > 4)
			{
				printf("****Opcao Invalida, tentar novamente****\n");
			}
				
		}

	}

	return 0;
}