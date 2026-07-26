#include <stdio.h>

int main()
{
	int a, *p = &a;
	
	scanf("%d",&a);
	printf("Salaio: %d\n",*p);
	printf("Novo Salaio: %d", *p+((*p*10)/100));
	
	return(0);
}