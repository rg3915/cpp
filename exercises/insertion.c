#include <stdio.h>
#define N 5 // tamanho do vetor

int main() {
    int i; // contador
    int v[N] = {222, 555, 343, 988, 531, 2}; // vetor
    Imprime(N, v);
    Insere(2, 133, v, N);
    printf("\nValor 133 inserido no indice 2 do vetor.\n");
    Imprime(N + 1, v);
    printf("\n");
    return 0;
}

/* Insere y entre as posicoes k-1 e k de v[0...n-1]
e devolve o novo valor de n. A funcao supoe 0 <= k <= n. */
int Insere(int k, int y, int v[], int n) {
    int j;
    for (j = n; j > k; j--) {
        v[j] = v[j - 1];
    }
    v[k] = y;
    return n + 1;
}

/* Imprime os elementos do vetor */
void Imprime(int n, int v[]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}