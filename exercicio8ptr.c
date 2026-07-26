#include <stdio.h>

int main()
{
	int a, b;
	int *p = &a, *o = &b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("Soma: %d\n", *p + *o);
	printf("Subtracao: %d\n", *p - *o);
	printf("Multiplicacao: %d\n", *p * *o);
	printf("Divisao: %d\n", *p / *o);
	
	return(0);
}