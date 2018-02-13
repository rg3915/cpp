/*
 * ex19.c - Mostrando valores de operacoes bit a bit
 */
#include <stdio.h>

int main() {
    printf("5 & 2 = %d\n", 5 & 2);
    printf("5 & 1 = %d\n", 5 & 1);
    printf("5 | 2 = %d\n", 5 | 2);
    printf("5 | 1 = %d\n", 5 | 1);
    printf("5 ^ 2 = %d\n", 5 ^ 2);
    printf("5 ^ 1 = %d\n", 5 ^ 1);
    printf("5 >> 2 = %d\n", 5 >> 2);
    printf("5 << 1 = %d\n", 5 << 1);
    printf("~0 = %d\n", ~0);
    printf("~5 = %d\n", ~5);
    return 0;
}