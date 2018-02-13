/*
 *  ex45.c - Mostrando um padrao de acordo com m e n
 * digitados pelo usuario.
 */
#include <stdio.h>

int main() {
    int n, m, lin, col, valor;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n, &m);
    
    printf("O padrao encontrado eh: \n");
    valor = n;
    for (lin = 1; lin <= m; lin++) {
        for (col = 1; col <= m; col++) {
            printf("%d\t", valor);
            valor--;
        }
        printf("\n");
    }
    
    return 0;   
}