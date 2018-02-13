/*
 *  ex24.c - Calculadora simples para as quatro
 * operacoes.
 */
#include <stdio.h>

int main() {
    int n1, n2;
    char op;

    printf("Digite uma expressao simples (numero operador numero): ");
    scanf("%d %c %d",&n1,&op,&n2);

    switch(op) {
        case '+':
            printf("A soma eh %d\n", n1+n2);
            break;
        case '-':
            printf("A subtracao eh %d\n",n1-n2);
            break;
        case '*':
            printf("A multiplicacao eh %d\n",n1*n2);
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro. Divisao por zero.\n");
            } else {
                printf("A divisao eh %f\n",((float)n1)/n2);
            }
            break;
        default:
            printf("Operador invalido.\n");
    }
    
    return 0;
}