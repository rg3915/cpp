/*
 *  ex29.c - Mostrando os quadrados dos numeros digitados
 * pelo usuario ateh quando o usuario digita 0
 */
#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    for ( ;n != 0; ) {
        printf("O numero e seu quadrado sao: %d, %d\n", n, n*n);
        printf("Digite outro numero: ");
        scanf("%d", &n);
    }

    return 0;
}