#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	
	double c, c1;
	int c2,c3;
	printf("Conversor de Fahrenheit para Graus Celsius \n");
	printf("Digite o numero a ser convertido: \n");
	scanf("%f", &c1);	
	
	c=(c1-32.0) * (5.0/9.0);
	
	printf("A conversao %.f Fahrenhit para graus Celsius eh igual a %.3f. \n", c1, c);
	//printf("A conversao %.f Fahrenhit para graus Celsius eh igual a %.3f. \n", c2, c3);
	
	return 0;	
}
