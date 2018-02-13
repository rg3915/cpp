/*
 *  ex55.c - Comecando a entender strings no C
 */
#include <stdio.h>

int main() {
    /* OPCAO 1: *
    char str[101] = "USP";**/
    
    /* OPCAO 2: *
    char str[101] = {'U','S','P','\0'};**/
    
    /* OPCAO 3: */
    char str[101];
    str[0] = 'U';
    str[1] = 'S';
    str[2] = 'P';
    str[3] = '\0';/**/
    
    printf("%s\n", str);
    
    str[1] = 'N';
    
    printf("%s\n", str);
    
    return 0;
}