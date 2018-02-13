/*
 *  ex50.c - Declarando vetor e iniciando ele na declaracao.
 */
#include <stdio.h>

int main() {
    int fat[] = {1,1,2,6,24,120,720,5040};
    int i;
    
    for (i = 0; i < 8; i++)  {
        printf("O fatorial de %d eh %d\n", i, fat[i]);
    }
    printf("O tamanho em bytes do vetor fat eh %lu\n", sizeof(fat));
    
    return 0;
}