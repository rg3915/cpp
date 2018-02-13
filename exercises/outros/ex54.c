/*
 *  ex52.c - Calculando media, variancia e desvio padrao
 * definindo funcoes para cada uma.
 */
#include <stdio.h>
#include <math.h>

#define MAX 100

float calcula_media(float valores[], int n) {
    int i;
    float total = 0.0;

    for (i = 0; i < n; i++) {
        total += valores[i];
    }
    
    return total/n;
}

float calcula_variancia(float valores[], int n) {
    int i;
    float total, media;
    
    media = calcula_media(valores,n);
    
    total = 0.0;
    for (i = 0; i < n; i++) {
        total += ((valores[i]-media)*(valores[i]-media));
    }
    
    return total/(n-1);
}

float calcula_desvio(float valores[], int n) {
    return sqrt(calcula_variancia(valores,n));
}

int main() {
    int cont = 0;
    float notas[MAX], nota;
    
    printf("Digite as notas: ");
    scanf("%f", &nota);
    while (nota >= 0) {
        notas[cont] = nota;
        cont++;
        scanf("%f", &nota);
    }
    
    printf("A media eh %f.\n", calcula_media(notas, cont));
    printf("A variancia eh %f.\n", calcula_variancia(notas, cont));
    printf("O desvio eh %f.\n", calcula_desvio(notas, cont));
    
    return 0;
}