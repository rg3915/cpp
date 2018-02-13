/*
 *  ex40.c - Calculando potencias de base fracionaria
 * e expoente inteiro (negativo ou positivo) utilizando
 * while.
 */
#include <stdio.h>

int main() {
    int exp;
    double base, pot = 1;

    printf("Digite uma base e um expoente: ");
    scanf("%lf %d", &base, &exp);

    if (exp < 0) {
        base = 1/base;
        exp = -exp;
    }
    
    while (exp > 0) {
        pot *= base;
        exp--;
    }
    
    printf("O resultado eh %f.\n", pot);
    
    return 0;
}