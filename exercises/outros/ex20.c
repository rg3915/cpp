/*
 *  ex20.c - Questao L61 da lista 2
 */
#include <stdio.h>

int main() {
    int n;
    int res;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    res = (n >> 4) & 1;
    printf("O bit na posicao 5 eh %d\n.", res);
    return 0;
}