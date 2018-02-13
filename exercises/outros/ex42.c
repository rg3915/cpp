/*
 *  ex42.c - Calculando a expressao: x^a + y^b + (x-y)^(a+b) 
 * com x e y numeros fracionarios e a e b numeros inteiros.
 * Usando funcao potencia 
 */
#include <stdio.h>

/*
 *  Funcao potencia: calcula base elevado exp sendo base 
 * um numero fracionario e exp um numero inteiro.
 */
double potencia(double base, int exp) {
    double pot = 1;
    
    if (exp < 0) {
        base = 1/base;
        exp = -exp;
    }
    
    while (exp > 0) {
        pot *= base;
        exp--;
    }
    
    return pot;
}

/*
 *  Funcao Principal
 */
int main() {
    double x, y;
    int a, b;
    
    printf("Digite x e y: ");
    scanf("%lf %lf", &x, &y);
    printf("Digite a e b: ");
    scanf("%d %d",&a,&b);
    
    printf("O resultado eh %f.\n",
        potencia(x,a)+potencia(y,b)+potencia(x-y,a+b));
    
    return 0;
}