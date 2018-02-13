/*
 *  ex52.c - Calculando media, variancia e desvio padrao
 * sem definir funcoes.
 */
#include <stdio.h>
#include <math.h>

int main() {
    float notas[100], nota, 
          total = 0.0, media;
    int cont = 0, i;

    /* Recebendo valores e preparando para calculo da media */
    printf("Digite as notas: ");
    scanf("%f", &nota);
    while (nota >= 0) {
        total += nota;
        notas[cont] = nota;
        cont++;
        scanf("%f", &nota);
    }
    media = total/cont;
    printf("A media eh %f.\n", media);
    
    /* Preparando para o calculo de variancia */
    total = 0.0;
    for (i = 0; i < cont; i++) {
        total += ((notas[i]-media)*(notas[i]-media));
    }
    
    /* Mostrando valores da variancia e do desvio padrao */
    printf("A variancia eh %f.\n", total/(cont-1));
    printf("O desvio padrao eh %f.\n", sqrt(total/(cont-1)));
    
    return 0;    
}