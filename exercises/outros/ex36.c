/*
 *  ex36.c - Verificando se um numero eh primo da forma
 * mais simples
 */
#include <stdio.h>

int main() {
    int n, i, div;

    printf("Digite um numero: ");
    scanf("%d", &n);
    
    div = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            div++;
            break;
        }
    }
    
    if (div == 0) {
        printf("O numero %d eh primo.\n", n);
    } else {
        printf("O numero %d nao eh primo.\n",n);
    }   
    
    return 0;
}