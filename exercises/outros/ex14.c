/*
 * Exemplo envolvendo operadores relacionais
 */
#include <stdio.h>

int main() {
    int n = 11, m = -9;
    printf("%d > %d (%d)\n",n ,m ,n > m);
    printf("%d >= %d (%d)\n",n ,m ,n >= m);
    printf("%d < %d (%d)\n",n ,m ,n < m);
    printf("%d <= %d (%d)\n",n ,m ,n <= m);
    printf("%d == %d (%d)\n",n ,m ,n == m);
    printf("%d != %d (%d)\n",n ,m ,n != m);
    return 0;
}