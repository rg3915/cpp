/*
 * ex16.c - Encontrando maior de 3 numeros (versao 2)
 */
#include <stdio.h>

int main() {
    int n;
    int maior;
    printf("Digite o primeiro numero: ");
    scanf("%d",&n);
    maior = n;
    printf("Digite o segundo numero: ");
    scanf("%d",&n);
    maior = ((maior > n) ? maior : n);
    printf("Digite o terceiro numero: ");
    scanf("%d",&n);
    maior = ((maior > n) ? maior : n);
    printf("O maior numero eh %d.\n", maior);
    return 0;    
}