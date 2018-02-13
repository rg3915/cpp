/*
 *  ex61.c - Declarando uma matriz de caracteres e usando cada elemento.
 */
#include <stdio.h>

#define MAX_LIN     4
#define MAX_COL     5

int main() {
    int i, j;
    char matriz[MAX_LIN][MAX_COL];
    
    printf("Digite %d caracteres: ", MAX_LIN*MAX_COL);
    for (i = 0; i < MAX_LIN; i++) {
        for (j = 0; j < MAX_COL; j++) {
            scanf("%c", &matriz[i][j]);
        }
    }
    
    printf("A matriz dos codigos ASCII dos caracteres digitados eh:\n");
    for (i = 0; i < MAX_LIN; i++) {
        for (j = 0; j < MAX_COL; j++) {
             printf("%03d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}