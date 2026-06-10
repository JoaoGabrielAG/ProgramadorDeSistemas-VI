#include <stdio.h>

int main()
{
	int vet[5];
	int soma = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d",&vet[i]);
	}
	for(int k = 0; k<5; k++)
	{
		soma = soma + vet[k];
	}
	
	printf("Total = %d\n",soma);
	
	return(0);
}