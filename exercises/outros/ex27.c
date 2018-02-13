/*
 *  ex27.c - Somando os numeros pares de 1 ateh um numero
 * fornecido pelo usuario
 */
#include <stdio.h>

int main() {
    int cont,n,res = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);
    
    for (cont = 1; cont <= n; cont++) {
        if (cont % 2 == 0) {
            res = res + cont;
        }
    }
    printf("A soma dos numeros pares ate %d eh %d\n",n,res);
    
    return 0;
}