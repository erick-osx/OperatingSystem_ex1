// Fazer um programa em C que pergunta um valor em metros e imprime o
// correspondente em decímetros, centímetros e milímetros
#include <stdio.h>
#include <stdlib.h>

int main(){

    float x, dc, cm, mm;
    printf("Conversor de Metros para Decimetro/Centimetro/Milimetro\n");
    printf("Digite um valor: \n");
    scanf("%f", &x);
    dc = 10 * x;
    cm = dc * 10;
    mm = cm * 10;

    printf("O valor em metros é: %.2f m. \n", x);
    printf("O valor em decimetros é: %.2f dc. \n", dc);
    printf("O valor em centimetros é: %.2f cm. \n", cm);
    printf("O valor em milimetros é: %.2f mm. \n", mm);
   
    return 0;
}

