#include <stdio.h>

int main ()
{
	int num;
	int *d = &num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	*d = num * 2;
	printf("Dobro: %d", *d);
	
	return 0;
}