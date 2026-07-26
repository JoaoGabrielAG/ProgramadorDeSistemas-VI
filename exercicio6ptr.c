#include <stdio.h>

int main ()
{
	int a, b;
	int *p = &a, *o = &b;
	printf("Digite A:");
	scanf("%d",&a);
	printf("Digite B:");
	scanf("%d",&b);
	
	if(*p > *o)
	{
		printf("Maior valor: %d",*p);
	}
	else
	{
		printf("Maior valor: %d",*o);
	}
	return 0;
}