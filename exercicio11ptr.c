#include <stdio.h>

int main()
{
	int a, b, c, d;
	int *p = &a, *o = &b, *i = &c, *u = &d;
	int *maior = p;
	int *menor = p;
	
	
	printf("Digite os valores:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	
	if(*o > *maior)
	{
		maior = o;
	}
	if(*i > *maior)
	{
		maior = i;
	}
	if(*u > *maior)
	{
		maior = u;
	}
	if(*o < *menor)
	{
		menor = o;
	}
	if(*i < *menor)
	{
		menor = i;
	}
	if(*u < *menor)
	{
		menor = u;
	}
	printf("\nMaior Valor: %d\n",*maior);
	printf("Menor Valor: %d\n",*menor);
	printf("Soma: %d\n", *p + *o + *i + *u);
	
	return(0);
}
	