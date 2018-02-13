#include <stdio.h>

int main() {
	float x;
	printf("Digite um numero fracionario: ");
	scanf("%f",&x);
	printf("O numero que voce digitou eh %f.\n",x);
	printf("O numero que voce digitou eh %e.\n",x); 
	printf("O numero que voce digitou eh %g.\n",x); 	
	return 0;
}