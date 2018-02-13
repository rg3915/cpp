/*
 *  ex39.c - Mostrando todos os primos existentes no intervalo
 * inserido pelo usuario.
 */
#include <stdio.h>

/*
 *  Funcao eh_primo: Verifica se um numero n eh primo.
 *  Devolve 0 se nao for primo e 1 se for.
 */
int eh_primo(int n) {
    int i;
    
    if (n < 2) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        if (n % 2 == 0) {
            return 0;
        } else {
            for (i = 3; i*i <= n; i += 2) {
                if (n % i == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

/*
 *  Funcao Principal
 */
int main() {
    int n, m, i, tem_primo;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n, &m);
    
    tem_primo = 0;
    for (i = n; i <= m; i++) {
        if (eh_primo(i) == 1) {
            printf("O numero %d eh primo.\n", i);
            tem_primo = 1;
        }
    }
    
    if (tem_primo == 0) {
        printf("Nao tem primo no intervalo.\n");
    }
    
    return 0;
}