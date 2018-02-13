/*
 *  ex49.c - Lendo menos que 100001 numeros e mostrando eles na
 * ordem inversa a digitada.
 */
#include <stdio.h>

#define MAX 100000

int main() {
    int v[MAX], i, temp, ultimo;

    printf("Digite os numeros: ");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &temp);
        
        if (temp == -1) {
            break;
        } else {
            v[i] = temp;
        }
    }
    ultimo = i-1;
    
    printf("Os numeros sao: ");
    for (i = ultimo; i >= 0; i--) {
        printf("%d ",v[i]);
    }
    printf("\n");
    
    return 0;
}