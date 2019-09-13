//Henrique Bergamo Shigihara
//1ºSemestre 2019 - SI100B
//Tópico 3 - Estruturas de Controle - Desvio Condicional

//ex18.c

#include <stdio.h> 
int main () 
{ 
	float p1, p2, p3, m, e, mf; 

	printf ("Insira a sua nota da P1: "); 
		scanf ("%f", &p1); 
	printf ("Insira a sua nota da P2: "); 
		scanf ("%f", &p2); 
	printf ("Insira a sua nota da P3: "); 
		scanf ("%f", &p3); 

	m = (p1 + p2 + p3) / 3; 
		if (p1 < 2) {
			printf ("Você foi reprovado porque tirou %.2f na P1 :/ \n", p1); }
		else if (p2 < 2){
			printf ("Você foi reprovado porque tirou %.2f na P2 :/ \n", p2); }
		else if (p3 < 2){ 
			printf ("Você foi reprovado porque tirou %.2f na P3 :/ \n", p3); }
		else if (m >= 6) { 
			printf ("Você foi aprovado com média %.2f ! \n", m);}

		else if (m <= 6){ 
			printf("Insira a nota do exame: \n");
			scanf ("%f", &e); 
			mf = (m + e) / 2; 
			if (mf >= 5) 
				printf ("Você foi aprovado com média final %.2f! \n", mf);
				else printf ("Você foi reprovado :/ \n");}

	return 0;
}
