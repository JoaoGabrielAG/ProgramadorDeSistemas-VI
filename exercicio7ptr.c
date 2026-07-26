#include <stdio.h>

int main()
{
	int a, b, c;
	int *p = &a, *o = &b, *i = &c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	printf("Variavel A: %d\n",*p);
	printf("Variavel A: %x\n",p);
	printf("\nVariavel B: %d\n",*o);
	printf("Variavel B: %x\n",o);
	printf("\nVariavel C: %d\n",*i);
	printf("Variavel C: %x\n",i);
	return(0);
}