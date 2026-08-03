#include<stdio.h>
#define T 3

int main()
{
	int matriz[T][T];
	int soma = 0;
	
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			printf("Informe os numeros: ");
			scanf("%d",&matriz[l][c]);
		}
	}
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			printf("%d ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n");
	for(int l = 0; l < T; l++)
	{
		for(int c = 3; c > 0; c--)
		{
			soma += matriz[l][c];
		}
	}
	printf("%d",soma);
	return(0);
}