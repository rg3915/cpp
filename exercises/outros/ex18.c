/*
 * ex18.c - Mostrando valores de operacoes logicas
 */
#include <stdio.h>

int main() {
    printf("0 && 8 (%d)\n", 0 && 8);
    printf("5 && 8 (%d)\n", 5 && 8);
    printf("0 || 0 (%d)\n", 0 || 0);
    printf("0 || 8 (%d)\n", 0 || 8);
    printf("5 || 8 (%d)\n", 5 || 8);
    printf("!0 (%d)\n", !0);
    printf("!5 (%d)\n", !5);
    return 0;
}