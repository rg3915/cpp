/*
 *  ex30.c - Calculando a pontencia de um numero
 */
#include <stdio.h>

int main() {
    int x, i;
    unsigned n;
    int pot = 1;

    printf("Digite uma base e um expoente: ");
    scanf("%d %u", &x, &n);
    
    for (i = 1; i <= n; i++) {
        pot = pot*x;
    }

    printf("A potencia eh %d.\n", pot);

    return 0;
}