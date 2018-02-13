/*
 *  ex46.c - Soma dos digitos dos numeros no intervalo de
 * m a n fornecidos pelo usuario.
 */
#include <stdio.h>

/*
 *  Funcao soma_digitos: devolve a soma dos digitos de n.
 */
int soma_digitos(int n) {
    int res = 0;

    if (n < 0) {
        n = -n;
    }
    
    while (n > 0) {
        res = res + (n % 10);
        n = n / 10;
    }

    return res;
}

/*
 *  Funcao Principal
 */
int main() {
    int n, m, i, soma;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &n, &m);
    
    soma = 0;
    for (i = n; i <= m; i++) {
        soma += soma_digitos(i);
    }
    
    printf("A soma dos digitos dos numeros no itervalo %d a %d eh %d.\n", n, m, soma);
    
    return 0;
}