/*
 *  ex53.c - Declarando e usando funcoes que utilizam 
 * vetores nos argumentos.
 */
#include <stdio.h>

/*
 *  Funcao mostra: Exibe na saida padrao os elementos do vetor x
 * da posicao inicio ate a posicao fim
 */
void mostra(int x[], int inicio, int final) {
    int i;
    for (i = inicio; i <= final; i++)
        printf("%d ", x[i]);
    printf("\n");
}

/*
 *  Funcao zera: Zera todos os elementos do vetor x da posicao 
 * inicio ate a posicao fim
 */
void zera(int *x, int inicio, int final) {
    int i;
    for (i = inicio; i <= final; i++) 
        x[i] = 0;
}

/*
 *  Funcao Principal
 */
int main() {
    int v[] = {9,8,7,6,5,4,3,2,1};

    mostra(v,0,3);
    mostra(v,2,7);
    mostra(v,3,4);
    mostra(v,0,7);
    
    zera(v,0,3);
    mostra(v,0,7);
    
    return 0;
}