/*
 *  ex51.c - Calculo da media dos valores sem usar vetor.
 */
#include <stdio.h>

int main() {
    int nota, cont = 0, total = 0;
    
    printf("Digite as notas: ");
    scanf("%d", &nota);
    
    while(nota != -1) {
        total += nota;
        cont++;
        scanf("%d", &nota);
    }
    printf("A media eh %f.\n", ((float)total)/cont);
    
    return 0;
}