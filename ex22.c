//Henrique Bergamo Shigihara 
//1ºSemestre 2019 - SI100B
//Tópico 4 - Estruturas de Controle - Repetição

//ex22.c

#include <stdio.h>
int main() 
{
	int n, s, a, b;
	long respn, resps, minus, fatminus, result;

	while(1) {
	
		//printf("Digite o numero n: ");
		scanf("%d", &n);
		respn = 1;
		a = n;
		while(a > 1)
		respn *= a--;

		//printf("Digite o numero s: ");
		scanf("%d", &s);
		resps = 1;
		b = s;
		while(b > 1)
		resps *= b--;
	
		minus = (n - s);
		fatminus = 1;
		while(minus > 1)
		fatminus *= minus--;

		result = ((respn)/(resps*fatminus));
	

		printf("%ld\n", result);
		break;
}

	return 0; 
}
