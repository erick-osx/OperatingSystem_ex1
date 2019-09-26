// Fazer um programa que solicita um número decimal e imprime o
// correspondente em hexa e octal.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);

    printf("O valor em hexa é: %x . \n", x);
    printf("O valor em octal é: %o . \n", x);
    return 0;
}
