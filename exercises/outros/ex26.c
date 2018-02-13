/*
 *  ex26.c - Somando todos os numeros de 1 ao numero
 * digitado pelo usuario
 */
#include <stdio.h>

int main() {
    int cont,n,res = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);
    
    for (cont = 1; cont <= n; cont++) {
        res = res + cont;
    }
    printf("A soma dos numeros de 1 a %d eh %d\n",n,res);
    
    return 0;
}