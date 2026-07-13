#include <stdio.h>

int main ()
{
	int num, num2, soma;
	int *a = &num;
	int *b = &num2;
	
	printf("Numero 1: ");
	scanf("%d", &num);
	printf("Numero 2: ");
	scanf("%d", &num2);
	
	soma = *a + *b;
	printf("Soma = %d", soma);
	return 0;
}