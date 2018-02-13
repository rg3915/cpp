/*
 *  ex35.c - Mostrando todos os divisores de um numero
 * da forma mais simples
 */
#include <stdio.h>

int main() {
    unsigned int n, i;
    
    printf("Digite um numero: ");
    scanf("%u", &n);

    printf("Os divisores sao: 1, ");
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%u, ", i);
        }
    }
    printf("%u\n",n);

    return 0;
}