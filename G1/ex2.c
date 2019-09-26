// Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y;
    for(x=1;x<=9;x++){
        printf("Tabuada de %d \n", x);
        for(y=0;y<=10;y++){
            printf("%d x %d = %d\n", x,y,(x*y) );
        }
    }
    return 0;
}

