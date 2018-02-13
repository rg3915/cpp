/*
 *  ex33.c - Mostrando todos os numeros triangulares
 * menores ou iguais a n
 */
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for (i = 1; i*(i+1)*(i+2) <= n; i++) {     
        printf("O numero %d = %d * %d * %d eh triangular.\n",i*(i+1)*(i+2),i,i+1,i+2);
    }
        
    return 0;
}