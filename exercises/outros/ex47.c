/*
 *  ex47.c - Utilizando ponteiros como argumentos de funcoes.
 */
#include <stdio.h>

/*
 *  Funcao troca: permuta os valores inteiros contidos nos blocos
 * com enderecos guardados em a e b.
 */
void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

/*
 *  Funcao Principal
 */
int main() {
    int a, b, 
        *p_a = &a, *p_b = &b;
    
    printf("Digite numeros inteiros para a e b: ");
    scanf("%d %d", &a, &b);
    
    printf("O valor de a eh %d e seu endereco eh %ld.\n", 
           *p_a, (long int) p_a);
    printf("O valor de b eh %d e seu endereco eh %ld.\n", 
           *p_b, (long int) p_b);
    
    /*  Colocando a para receber a + b */
    *p_a = a + *p_b;
    printf("Agora a eh %d e seu endereco eh %ld.\n", 
           a, (long int) p_a);
    printf("Agora b eh %d e seu endereco eh %ld.\n", 
           b, (long int) p_b);
    
    /*  Permutando os valores nas variaveis a e b */
    troca(&a,&b);
    printf("E agora a eh %d e seu endereco eh %ld.\n", 
           a, (long int) p_a);
    printf("E agora b eh %d e seu endereco eh %ld.\n", 
           b, (long int) p_b);
    
    return 0;
}