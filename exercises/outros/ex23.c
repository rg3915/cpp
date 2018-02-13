/*
 *  ex23.c - Verificando o quadrante de um ponto (x,y) no 
 * plano cartesiano.
 */
#include <stdio.h>

int main() {
    float x, y;
    
    printf("Digite as coordenadas do ponto: ");
    scanf("%f %f", &x, &y);
    
    if (x > 0 && y > 0) {
        printf("O ponto (%f,%f) estah no quadrante 1\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto (%f,%f) estah no quadrante 4\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto (%f,%f) estah no quadrante 2\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto (%f,%f) estah no quadrante 3\n", x, y);
    } else {
        printf("O ponto (%f,%f) nao estah em nenhum quadrante.\n", x, y );
    }
    return 0;
}