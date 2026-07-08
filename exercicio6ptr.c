#include <stdio.h>

int main ()
{
	int a, b, maior;
	int *p = &a, *o = &b;
	printf("Digite A:");
	scanf("%d",&a);
	printf("Digite B:");
	scanf("%b",&b);
	
	if(p > o)
	{
		printf("Maior valor: %d",maior);
	}
	else(o > p);
	{
		printf("Maior valor: %d",maior);
	}
	return 0;
}