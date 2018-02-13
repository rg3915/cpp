/*
 *  ex28.c - Somando os numeros pares de 1 ateh um numero
 * fornecido pelo usuario (versao melhorada)
 */
#include <stdio.h>

int main() {
    int cont, n;
    unsigned long int res = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);
    for (cont = 2; cont <= n; cont += 2) {
        res = res + cont;
    }
    printf("A soma dos numeros pares ateh %d eh %lu\n",n,res);
    
    return 0;
}