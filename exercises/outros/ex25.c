/*
 *  ex25.c - Mostrando todos os numeros impares menores
 * ou iguais a um numero digitado pelo usuario 
 */
#include <stdio.h>

int main() {
    int cont,n;

    printf("Digite um numero: ");
    scanf("%d",&n);
    
    printf("Os numeros impares sao ");
    for (cont = 1; cont <= n; cont+=2) printf("%d ",cont);
    printf("\n");
 
    return 0;
}