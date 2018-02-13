/*
 * ex17.c - Encontrando maior de 3 numeros (versao 3)
 */
#include <stdio.h>

int main() {
    int a, b, c;
    int maior;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d",&a,&b,&c);
    maior = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    printf("O maior dos tres eh %d.\n", maior);
    return 0;    
}