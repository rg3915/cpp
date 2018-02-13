/*
 *  ex48.c - Lendo 10 numero e mostrando eles na ordem inversa
 * a digitada.
 */
#include <stdio.h>

#define MAX 10

int main() {
    int v[MAX], i;

    printf("Digite os numeros: ");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &v[i]);
    }
    
    printf("Os numeros sao: ");
    for (i = MAX-1; i >= 0; i--) {
        printf("%d ",v[i]);
    }
    printf("\n");
    
    return 0;
}