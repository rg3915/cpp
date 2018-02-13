/*
 *  ex31.c - Verificando se um numero eh triangular
 */
#include <stdio.h>

int main() {
    int n, i, aux;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for (i = 1; ; i++) {
        aux = i*(i+1)*(i+2);
        if (aux == n) {
            printf("O numero %d = %d * %d * %d eh triangular.\n",n,i,i+1,i+2);
            break;
        } else if (aux > n) {
            printf("O numero %d nao eh triangular.\n", n);
            break;
        }
    }
        
    return 0;
}