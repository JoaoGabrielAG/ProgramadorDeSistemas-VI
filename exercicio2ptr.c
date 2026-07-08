#include <stdio.h>

int main ()
{
	int idade = 20;
	int *p = &idade;
	
	
	printf("Valor inicial: %d\n", idade);
	*p = 25;
	printf("Valor final: %d\n", *p);

	return 0;
}