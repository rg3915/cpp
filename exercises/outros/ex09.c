#include <stdio.h>

int main() {
	double x;
	printf("Digite um numero fracionario: ");
	scanf("%lf",&x);
	printf("O numero fracionario eh %f.\n",x);
	printf("O numero fracionario eh %e.\n",x);
	printf("O numero fracionario eh %g.\n",x);
	return 0;
}