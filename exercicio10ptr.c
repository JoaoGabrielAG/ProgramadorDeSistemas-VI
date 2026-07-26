#include <stdio.h>

int main()
{
	int a, b, *p = &a, *o = &b;
	
	printf("Numero 1:");
	scanf("%d",&a);
	printf("\nNumero 2:");
	scanf("%d",&b);
	
	printf("\nResultado:\n");
	printf("Numero 1: %d\n",*p * 2);
	printf("Numero 2: %d\n",*o / 2);
	
	return(0);
}