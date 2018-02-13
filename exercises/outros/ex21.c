/*
 *  ex21.c - Dividindo um numero fracionario por 
 * um inteiro.
 */
#include <stdio.h>

int main() {
    float x;
    int d;
    
    printf("Digite um numero fracionario: ");
    scanf("%f",&x);
    printf("Digite um numero inteiro: ");
    scanf("%d",&d);
    
    if (d != 0) {
        printf("O resultado da divisao eh %f.\n", x/d);
    } else {
        printf("O divisor eh zero. Divisao nao realizada.\n");
    }
    
    return 0;
}