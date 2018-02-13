/*
 *  ex41.c - Calculando a expressao: x^a + y^b + (x-y)^(a+b) 
 * com x e y numeros fracionarios e a e b numeros inteiros. 
 */
#include <stdio.h>

int main() {
    double x, y, potx, poty, x_menos_y, potxy;
    int a, b, a_mais_b;
    
    printf("Digite x e y: ");
    scanf("%lf %lf", &x, &y);
    
    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);
    
    x_menos_y = x - y;
    a_mais_b = a + b;
    
    potx = 1;
    if (a < 0) {
        x = 1/x;
        a = -a;
    }
    
    while (a > 0) {
        potx *= x;
        a--;
    }
    /* potx tem o valor x elevado a a */
    
    poty = 1;
    if (b < 0) {
        y = 1/y;
        b = -b;
    }
    
    while (b > 0) {
        poty *= y;
        b--;
    }
    /* poty tem o valor y elevado e b */
    
    potxy = 1;
    if (a_mais_b < 0) {
        x_menos_y = 1/x_menos_y;
        a_mais_b = -a_mais_b;
    }
    
    while (a_mais_b > 0) {
        potxy *= x_menos_y;
        a_mais_b--;
    }
    /* potxy tem o valor de x-y elevado a a+b */
    
    printf("O resultado eh %f.\n", potx+poty+potxy);  
    
    return 0;
}