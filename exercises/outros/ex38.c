/*
 *  ex38.c - Calculando o mdc de dois numeros usando
 * o algoritmo de euclides
 */
#include <stdio.h>

int main() {
    int n, m, dividendo, divisor, resto;

    printf("Digite dois numeros: ");
    scanf("%d %d",&n,&m);

    if (n > m) {
        dividendo = n;
        divisor = m;
    } else {
        dividendo = m;
        divisor = n;
    }

    resto = dividendo % divisor;
    /* substituido o for pelo while */
    while (resto != 0) {
         dividendo = divisor;
         divisor = resto;
         resto = dividendo % divisor;   
    }
    
    printf("O mdc de %d e %d eh %d.\n", n, m, divisor);   

    return 0;
}