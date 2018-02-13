/*
 *  ex32.c - Verificando se um numero eh triangular
 * (sem usar o break)
 */
#include <stdio.h>

int main() {
    char prox;
    unsigned int n, i, prod;

    printf("Digite um numero: ");
    scanf("%u", &n);

    prox = 1;
    for (i = 1; prox == 1; i++) {
        prod = i*(i+1)*(i+2);
        if (prod == n) {
            printf("O numero %u = %u*%u*%u eh triangular.\n", n, i, i+1, i+2);
            prox = 0;
        } else if (prod > n) {
            printf("O numero %u nao eh triangular.\n", n);
            prox = 0;
        }
    }

    return 0;
}