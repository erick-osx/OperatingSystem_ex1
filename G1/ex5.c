#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int x, y;
	float raiz, seno;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &x);	
	printf("Digite o segundo numero: \n");
	scanf("%d", &y);
	
	raiz = sqrt(x*x + y*y);
	seno = sinf(x - y);
	
	printf("A soma de %d por %d eh igual a %d. \n", x, y, (x+y));
	printf("O propduto do %d por %d eh igual a %d. \n", x, y, (x*y));
	printf("O quadrado de %d eh igual a %d. \n", x, (x*x));
	printf("A raiz quadrada da soma dos quadrados eh igual a %f. \n", raiz);
	printf("O seno da diferenca eh igual a %f. \n", seno);
	printf("O modulo de %d eh igual a %d. \n", x, (x%2));
	
	return 0;	
}
