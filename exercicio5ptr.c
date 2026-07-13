#include <stdio.h>

int main ()
{
	int a, b;
	int *p = &a;
	int	*o = &b;
	int *i;
	printf("Numero 1:");
	scanf("%d",&a);
	printf("Numero 2:");
	scanf("%d",&b);
	
	printf("ANTES:\n A = %d\n B = %d\n", *p, *o);
	i = p;
	p = o;
	o = i;
	printf("DEPOIS:\n A = %d\n B = %d\n", *p, *o);
	
	return 0;
}