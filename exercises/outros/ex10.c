#include <stdio.h>

int main(){
	int v;
	printf("O tamanho de v eh %ld bytes.\n",sizeof(v));
	printf("O tamanho de int eh %ld bytes.\n",sizeof(int)); 
	printf("O tamanho de unsigned int eh %ld bytes.\n",sizeof(unsigned int));
	printf("O tamanho de signed int eh %ld bytes.\n",sizeof(signed int));
	printf("O tamanho de short int eh %ld bytes.\n",sizeof(short int));
	printf("O tamanho de unsigned short int eh %ld bytes.\n",sizeof(unsigned short int));
	printf("O tamanho de signed short int eh %ld bytes.\n",sizeof(signed short int));
	printf("O tamanho de long int eh %ld bytes.\n",sizeof(long int));
	printf("O tamanho de unsigned long int eh %ld bytes.\n",sizeof(unsigned long int));
	printf("O tamanho de signed long int eh %ld bytes.\n",sizeof(signed long int));
	return 0;
}